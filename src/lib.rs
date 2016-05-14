#![feature(lang_items)]
#![feature(start)]
#![no_std]

extern crate libc;
use libc::{size_t,c_int,c_void};

//static int Open ( vlc_object_t * );
//static void Close( vlc_object_t * );

// int vlc_entry__MODULE_NAME (vlc_set_cb, void *); int vlc_entry__MODULE_NAME (vlc_set_cb vlc_set, void *opaque) { module_t *module; module_config_t *config = ((void*)0); if (vlc_set (opaque, ((void*)0), VLC_MODULE_CREATE, &module)) goto error; if (vlc_set (opaque, module, VLC_MODULE_NAME, ("modules/demux/wav.c"))) goto error; 
//    if (vlc_set (opaque, module, VLC_MODULE_DESCRIPTION, (const char *)(N_("WAV demuxer")))) goto error;
//    vlc_set (opaque, ((void*)0), VLC_CONFIG_CREATE, (0x06), &config); vlc_set (opaque, config, VLC_CONFIG_VALUE, (int64_t)(4));
//    vlc_set (opaque, ((void*)0), VLC_CONFIG_CREATE, (0x07), &config); vlc_set (opaque, config, VLC_CONFIG_VALUE, (int64_t)(403));
//    if (vlc_set (opaque, module, VLC_MODULE_CAPABILITY, (const char *)("demux")) || vlc_set (opaque, module, VLC_MODULE_SCORE, (int)(142))) goto error;
//    if (vlc_set (opaque, module, VLC_MODULE_CB_OPEN, Open) || vlc_set (opaque, module, VLC_MODULE_CB_CLOSE, Close)) goto error;
//(void) config; return 0; error: return -1; } 

//EXTERN_SYMBOL typedef int (*vlc_set_cb) (void *, void *, int, ...);

//type vlc_set_cb = FnOnce(*mut c_void, *mut c_void, c_int, ...) -> c_int;

#[no_mangle]
pub extern fn vlc_entry__3_0_0a(vlc_set: unsafe extern fn(*mut c_void, *mut c_void, *mut c_void, c_int, ...) -> c_int,
  opaque: *mut c_void) -> c_int {

 -1
}

