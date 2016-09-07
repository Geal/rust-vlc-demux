use libc::{uint8_t, uint16_t, uint32_t, uint64_t, int64_t, size_t, ssize_t, c_void, c_int, c_uint, c_char,
           c_float};

#[macro_export]
macro_rules! vlc_fourcc (
  ($a: expr, $b: expr, $c: expr, $d: expr) => {
    $a as uint32_t | (($b as uint32_t) << 8) |
      (($c as uint32_t) << 16) | (($d as uint32_t) << 24)
  }
);

#[repr(i32)]
pub enum VLCModuleProperties {
    VLC_MODULE_CREATE = 0,
    VLC_CONFIG_CREATE,

    VLC_MODULE_CPU_REQUIREMENT=0x100,
    VLC_MODULE_SHORTCUT,
    VLC_MODULE_CAPABILITY,
    VLC_MODULE_SCORE,
    VLC_MODULE_CB_OPEN,
    VLC_MODULE_CB_CLOSE,
    VLC_MODULE_NO_UNLOAD,
    VLC_MODULE_NAME,
    VLC_MODULE_SHORTNAME,
    VLC_MODULE_DESCRIPTION,
    VLC_MODULE_HELP,
    VLC_MODULE_TEXTDOMAIN,

    VLC_CONFIG_NAME=0x1000,
    VLC_CONFIG_VALUE,
    VLC_CONFIG_RANGE,
    VLC_CONFIG_ADVANCED,
    VLC_CONFIG_VOLATILE,
    VLC_CONFIG_PERSISTENT_OBSOLETE,
    VLC_CONFIG_PRIVATE,
    VLC_CONFIG_REMOVED,
    VLC_CONFIG_CAPABILITY,
    VLC_CONFIG_SHORTCUT,
    VLC_CONFIG_OLDNAME_OBSOLETE,
    VLC_CONFIG_SAFE,
    VLC_CONFIG_DESC,
    VLC_CONFIG_LIST_OBSOLETE,
    VLC_CONFIG_ADD_ACTION_OBSOLETE,
    VLC_CONFIG_LIST,
    VLC_CONFIG_LIST_CB,
}

pub type stream_t       = c_void;
pub type libvlc_int_t   = c_void;
pub type module_t       = c_void;
//FIXME: correct va_list implementation in Rust?
pub type va_list        = c_void;
pub type input_thread_t = c_void;
pub type es_out_id_t    = c_void;
pub type mtime_t        = int64_t;
pub type vlc_fourcc_t   = uint32_t;

pub type extra_languages_t = c_void;
pub type text_style_t      = c_void;
pub type es_out_sys_t      = c_void;

#[repr(C)]
pub struct vlc_object_t {
  pub psz_object_type: *const c_char,
  pub psz_header:      *mut c_char,
  pub i_flags:         c_int,
  // no c_bool in Rust FFI yet?
  pub b_force:         bool,
  pub p_libvlc:        *mut libvlc_int_t,
  pub p_parent:        *mut vlc_object_t,
}

#[repr(C)]
pub struct demux_t<T> {
  //VLC_COMMON_MEMBERS
  pub psz_object_type: *const c_char,
  pub psz_header:      *mut c_char,
  pub i_flags:         c_int,
  pub b_force:         bool,
  pub p_libvlc:        *mut libvlc_int_t,
  pub p_parent:        *mut vlc_object_t,

  pub p_module:        *mut module_t,

  pub psz_access:      *mut c_char,
  pub psz_demux:       *mut c_char,
  pub psz_location:    *mut c_char,
  pub psz_file:        *mut c_char,

  pub s:               *mut stream_t,
  pub out:             *mut es_out_t,
  pub pf_demux:        Option<extern "C" fn(*mut demux_t<T>) -> c_int>,
  pub pf_control:      Option<extern "C" fn(*mut demux_t<T>, c_int, *const va_list) -> c_int>,

  // 'info' nested struct. Can we do that with Rust FFI?
  pub i_update:        c_uint,
  pub i_title:         c_int,
  pub i_seekpoint:     c_int,

  //FIXME: p_sys contains a pointer to a module specific structure, make it generic?
  pub p_sys:           *mut T,

  pub p_input:         *mut input_thread_t,
}

#[repr(C)]
pub struct es_out_t {
  pub pf_add:     Option<unsafe extern "C" fn(*mut es_out_t, *mut es_format_t) -> *mut es_out_id_t>,
  pub pf_send:    Option<unsafe extern "C" fn(*mut es_out_t, *mut es_out_id_t, *mut block_t) -> c_int>,
  pub pf_del:     Option<unsafe extern "C" fn(*mut es_out_t, *mut es_out_id_t)>,
  pub pf_control: Option<unsafe extern "C" fn(*mut es_out_t, c_int, va_list) -> c_int>,
  pub pf_destroy: Option<unsafe extern "C" fn(*mut es_out_t)>,
  pub p_sys:      *mut es_out_sys_t,
}

#[repr(C)]
pub struct block_t {
  pub p_next:       *mut block_t,
  pub p_buffer:     *mut uint8_t,
  pub i_buffer:     size_t,
  pub p_start:      *mut uint8_t,
  pub i_size:       size_t,
  pub i_flags:      uint32_t,
  pub i_nb_samples: c_uint,
  pub i_pts:        mtime_t,
  pub i_dts:        mtime_t,
  pub i_length:     mtime_t,
  pub pf_release:   Option<unsafe extern "C" fn(*mut block_t)>,
}

#[repr(C)]
pub struct audio_format_t {
  pub i_format:            vlc_fourcc_t,
  pub i_rate:              c_uint,
  pub i_physical_channels: uint16_t,
  pub i_original_channels: uint32_t,
  pub i_bytes_per_frame:   c_uint,
  pub i_frame_length:      c_uint,
  pub i_bitspersample:     c_uint,
  pub i_blockalign:        c_uint,
  pub i_channels:          uint8_t,
}

#[repr(C)]
pub struct audio_replay_gain_t {
  pub pb_peak: [bool; 2],
  pub pf_peak: [c_float; 2],
  pub pb_gain: [bool; 2],
  pub pf_gain: [c_float; 2],
}

#[repr(C)]
pub struct video_palette_t {
  pub i_entries: c_int,
  pub palette:   [[uint8_t; 256];4],
}

#[repr(i32)]
pub enum es_format_category_e {
  UNKNOWN_ES = 0,
  VIDEO_ES,
  AUDIO_ES,
  SPU_ES,
  NAV_ES,
}

#[repr(i32)]
pub enum video_orientation_t {
  /**< Top line represents top, left column left. */
  ORIENT_TOP_LEFT = 0,
  /**< Flipped horizontally */
  ORIENT_TOP_RIGHT,
  /**< Flipped vertically */
  ORIENT_BOTTOM_LEFT,
  /**< Rotated 180 degrees */
  ORIENT_BOTTOM_RIGHT,
  /**< Transposed */
  ORIENT_LEFT_TOP,
  /**< Rotated 90 degrees clockwise */
  ORIENT_LEFT_BOTTOM,
  /**< Rotated 90 degrees anti-clockwise */
  ORIENT_RIGHT_TOP,
  /**< Anti-transposed */
  ORIENT_RIGHT_BOTTOM,
}
/*
  ORIENT_NORMAL      = ORIENT_TOP_LEFT,
  ORIENT_TRANSPOSED  = ORIENT_LEFT_TOP,
  ORIENT_ANTI_TRANSPOSED = ORIENT_RIGHT_BOTTOM,
  ORIENT_HFLIPPED    = ORIENT_TOP_RIGHT,
  ORIENT_VFLIPPED    = ORIENT_BOTTOM_LEFT,
  ORIENT_ROTATED_180 = ORIENT_BOTTOM_RIGHT,
  ORIENT_ROTATED_270 = ORIENT_LEFT_BOTTOM,
  ORIENT_ROTATED_90  = ORIENT_RIGHT_TOP,
*/

#[repr(i32)]
pub enum video_color_primaries_t {
  COLOR_PRIMARIES_UNDEF,
  COLOR_PRIMARIES_BT601_525,
  COLOR_PRIMARIES_BT601_625,
  COLOR_PRIMARIES_BT709,
  COLOR_PRIMARIES_BT2020,
  COLOR_PRIMARIES_DCI_P3,
}

#[repr(i32)]
pub enum video_transfer_func_t {
  TRANSFER_FUNC_UNDEF,
  TRANSFER_FUNC_LINEAR,
  TRANSFER_FUNC_SRGB /*< Gamma 2.2 */,
  TRANSFER_FUNC_BT709,
}

#[repr(i32)]
pub enum video_color_space_t {
  COLOR_SPACE_UNDEF,
  COLOR_SPACE_BT601,
  COLOR_SPACE_BT709,
  COLOR_SPACE_BT2020,
}

#[repr(i32)]
pub enum video_chroma_location_t {
  CHROMA_LOCATION_UNDEF,
  CHROMA_LOCATION_LEFT,   /*< Most common in MPEG-2 Video, H.264/265 */
  CHROMA_LOCATION_CENTER, /*< Most common in MPEG-1 Video, JPEG */
  CHROMA_LOCATION_TOP_LEFT,
  CHROMA_LOCATION_TOP_CENTER,
  CHROMA_LOCATION_BOTTOM_LEFT,
  CHROMA_LOCATION_BOTTOM_CENTER,
}

#[repr(C)]
pub struct video_format_t {
  pub i_chroma: vlc_fourcc_t,
  pub i_width:  c_uint,
  pub i_height: c_uint,
  pub i_x_offset: c_uint,
  pub i_y_offset: c_uint,
  pub i_visible_width: c_uint,
  pub i_visible_height: c_uint,
  pub i_bits_per_pixel: c_uint,
  pub i_sar_num: c_uint,
  pub i_sar_den: c_uint,
  pub i_frame_rate: c_uint,
  pub i_frame_rate_base: c_uint,
  pub i_rmask: uint32_t,
  pub i_gmask: uint32_t,
  pub i_bmask: uint32_t,
  pub i_rrshift: c_int,
  pub i_lrshift: c_int,
  pub i_rgshift: c_int,
  pub i_lgshift: c_int,
  pub i_rbshift: c_int,
  pub i_lbshift: c_int,
  pub p_palette: *mut video_palette_t,
  pub orientation: video_orientation_t,
  pub primaries: video_color_primaries_t,
  pub transfer:  video_transfer_func_t,
  pub space: video_color_space_t,
  pub b_color_range_full: bool,
  pub chroma_location: video_chroma_location_t,
}

#[repr(C)]
pub struct subs_format_t {
  pub psz_encoding: *mut c_char,
  pub i_x_origin:   c_int,
  pub i_y_origin:   c_int,

  // spu struct
    pub palette: [uint32_t; 17],
    pub i_original_frame_width: c_int,
    pub i_original_frame_height: c_int,

  // dvb struct
    pub i_id: c_int,

  // teletext struct
    pub i_magazine: c_int,
    pub i_page: c_int,

  pub p_style: *mut text_style_t,
}

#[repr(C)]
pub struct es_format_t {
  pub i_cat:             c_int,
  pub i_codec:           vlc_fourcc_t,
  pub i_original_fourcc: vlc_fourcc_t,
  pub i_id:              c_int,
  pub i_group:           c_int,
  pub i_priority:        c_int,
  pub psz_language:      *mut c_char,
  pub psz_description:   *mut c_char,
  pub i_extra_languages: c_uint,
  pub p_extra_languages: *mut extra_languages_t,
  pub audio:             audio_format_t,
  pub audio_replay_gain: audio_replay_gain_t,
  pub video:             video_format_t,
  pub subs:              subs_format_t,
  pub i_bitrate:         c_int,
  pub i_profile:         c_int,
  pub i_level:           c_int,
  pub b_packetized:      bool,
  pub i_extra:           c_int,
  pub p_extra:           *mut c_void,
}

#[link(name = "vlccore")]
extern {
  pub fn stream_Peek(stream: *mut stream_t, buf: *mut *const uint8_t, size: size_t) -> ssize_t;

  // https://www.videolan.org/developers/vlc/doc/doxygen/html/group__stream.html
  pub fn stream_Read(stream: *mut stream_t, buf: *const c_void, size: size_t) -> ssize_t;
  // https://www.videolan.org/developers/vlc/doc/doxygen/html/group__stream.html
  pub fn stream_Tell(stream: *mut stream_t) -> uint64_t;

  pub fn stream_Block(stream: *mut stream_t, size: size_t) -> *mut block_t;

  pub fn demux_vaControlHelper(stream: *mut stream_t, i_start: int64_t, i_end: int64_t,
                                   i_bitrate: int64_t, i_align: c_int, i_query: c_int, args: *const va_list) -> c_int;

  pub fn es_format_Init(format: *mut es_format_t, i_cat: c_int, i_codec: vlc_fourcc_t);
  pub fn vlc_Log(obj: *mut vlc_object_t, priority: c_int, module: *const uint8_t, format: *const uint8_t, ...);
}
