use libc::{uint8_t, size_t, ssize_t, c_void, c_int, c_uint};

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

type stream_t     = c_void;
type vlc_object_t = c_void;

#[link(name = "vlccore")]
extern {
  //ssize_t stream_Peek(stream_t *, const uint8_t **, size_t)
  pub fn stream_Peek(stream: *mut stream_t, buf: *mut *const uint8_t, size: size_t) -> ssize_t;
  //VLC_API void vlc_Log(vlc_object_t *obj, int prio, const char *module,
  //                   const char *file, unsigned line, const char *func,
  //                   const char *format, ...) VLC_FORMAT(7, 8); 

  pub fn vlc_Log(obj: *mut vlc_object_t, priority: c_int, module: *const uint8_t, file: *const uint8_t,
    line: c_uint, func: *const uint8_t, format: *const uint8_t, ...);

}
