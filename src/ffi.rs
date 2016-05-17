use libc::{uint8_t, uint64_t, size_t, ssize_t, c_void, c_int, c_uint, c_char};

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

pub type stream_t     = c_void;
pub type libvlc_int_t = c_void;
pub type module_t     = c_void;
pub type es_out_t     = c_void;
//FIXME: correct va_list implementation in Rust?
pub type va_list      = c_void;
pub type input_thread_t = c_void;
//FIXME: this is a local type
pub type demux_sys_t  = c_void;

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
pub struct demux_t {
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
  pub pf_demux:        Option<unsafe extern "C" fn(*mut demux_t) -> c_int>,
  pub pf_control:      Option<unsafe extern "C" fn(*mut demux_t, c_int, *const va_list) -> c_int>,

  // 'info' nested struct. Can we do that with Rust FFI?
  pub i_update:        c_uint,
  pub i_title:         c_int,
  pub i_seekpoint:     c_int,

  //FIXME: p_sys contains a pointer to a module specific structure, make it generic?
  pub p_sys:           *mut demux_sys_t,

  pub p_input:         *mut input_thread_t,
}

#[link(name = "vlccore")]
extern {
  //ssize_t stream_Peek(stream_t *, const uint8_t **, size_t)
  pub fn stream_Peek(stream: *mut stream_t, buf: *mut *const uint8_t, size: size_t) -> ssize_t;
  //VLC_API void vlc_Log(vlc_object_t *obj, int prio, const char *module,
  //                   const char *file, unsigned line, const char *func,
  //                   const char *format, ...) VLC_FORMAT(7, 8);

  // https://www.videolan.org/developers/vlc/doc/doxygen/html/group__stream.html
  pub fn stream_Read(stream: *mut stream_t, buf: *const c_void, size: size_t) -> ssize_t;
  // https://www.videolan.org/developers/vlc/doc/doxygen/html/group__stream.html
  pub fn stream_Tell(stream: *mut stream_t) -> uint64_t;

  pub fn stream_Seek(stream: *mut stream_t, index: uint64_t) -> c_int;

  //FIXME: the actual vlc_Log does not the one defined in include/vlc_messages.h, why?
  //pub fn vlc_Log(obj: *mut vlc_object_t, priority: c_int, module: *const uint8_t, file: *const uint8_t,
  //  line: c_uint, func: *const uint8_t, format: *const uint8_t, ...);
  pub fn vlc_Log(obj: *mut vlc_object_t, priority: c_int, module: *const uint8_t, format: *const uint8_t, ...);

}
