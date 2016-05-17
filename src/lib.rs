#![feature(lang_items)]
#![feature(start)]
#![allow(non_camel_case_types, dead_code)]

extern crate nom;
extern crate flavors;

mod vlc;
mod ffi;
mod traits;
mod types;

extern crate libc;
use libc::{size_t, c_int, c_char, c_void, c_uint, uint8_t, uint64_t, int64_t};
use std::boxed::Box;

use std::mem::transmute;
use vlc::{VLCModuleProperties, stream_Peek, stream_Seek, stream_Read, stream_Tell, vlc_Log, vlc_object_t, demux_t, va_list, demux_vaControlHelper};

pub use traits::*;
pub use types::*;

macro_rules! vlc_Log {
  ($demux:expr, $priority:expr, $module:expr, $format:expr) => {{
    unsafe {
      vlc_Log($demux as *mut vlc_object_t, $priority, $module.as_ptr(), $format.as_ptr())
    }
  }};
  ($demux:expr, $priority:expr, $module:expr, $format:expr, $($args:expr),*) => {{
    unsafe {
      vlc_Log($demux as *mut vlc_object_t, $priority, $module.as_ptr(), $ format.as_ptr(), $($args),*)
    }
  }};
}

pub struct demux_sys_t {
  i_pos:  usize,
  i_size: usize,
}

#[no_mangle]
pub extern fn vlc_entry__3_0_0a(vlc_set: unsafe extern fn(*mut c_void, *mut c_void, c_int, ...) -> c_int,
  opaque: *mut c_void) -> c_int {
  let module: *mut c_void = 0 as *mut c_void;
  let config: *mut c_void = 0 as *mut c_void;

  unsafe {
    if vlc_set(opaque, 0 as *mut c_void, VLCModuleProperties::VLC_MODULE_CREATE as i32, &module) != 0 {
      panic!("cannot create module");
      return -1;
    }
  }

  let name = b"inrustwetrust\0";
  unsafe {
    if vlc_set(opaque, module, VLCModuleProperties::VLC_MODULE_NAME as i32, name.as_ptr()) != 0 {
      panic!("cannot set module name");
      return -1;
    }
  }

  let desc = b"FLV demuxer written in Rust\0";
  unsafe {
    if vlc_set(opaque, module, VLCModuleProperties::VLC_MODULE_DESCRIPTION as i32, desc.as_ptr()) != 0 {
      panic!("cannot set module description");
      return -1;
    }
  }

  let capability = b"demux\0";
  unsafe {
    if vlc_set(opaque, module, VLCModuleProperties::VLC_MODULE_CAPABILITY as i32, capability.as_ptr()) != 0 {
      panic!("cannot set module capability");
      return -1;
    }
  }

  unsafe {
    if vlc_set(opaque, module, VLCModuleProperties::VLC_MODULE_SCORE as i32, 999) != 0 {
      panic!("cannot set module score");
      return -1;
    }
  }

  unsafe {
    let p_open: extern "C" fn(*mut demux_t<demux_sys_t>) -> c_int = transmute(open as extern "C" fn(_) -> c_int);
    if vlc_set(opaque, module, VLCModuleProperties::VLC_MODULE_CB_OPEN as i32, p_open) != 0 {
      panic!("cannot set module open callback");
      return -1;
    }
  }

  unsafe {
    let p_close: extern "C" fn(*mut demux_t<demux_sys_t>) = transmute(close as extern "C" fn(_));
    if vlc_set(opaque, module, VLCModuleProperties::VLC_MODULE_CB_CLOSE as i32, p_close) != 0 {
      panic!("cannot set module close callback");
      return -1;
    }
  }
  //panic!("POUETPOUETPOUET");
 0
}

extern "C" fn open(p_demux: *mut demux_t<demux_sys_t>) -> c_int {
  vlc_Log!(p_demux, 0, b"inrustwetrust\0", "in rust function before stream_Peek %d\n\0", 42);
  unsafe {
    let sl = stream_Peek((*p_demux).s, 9);
    //panic!("GOT SLICE: {:?}", sl);
    vlc_Log!(p_demux, 0, b"inrustwetrust\0", "got slice: %s\n\0", sl.as_ptr());

    match flavors::parser::header(sl) {
      nom::IResult::Error(_) => {
        vlc_Log!(p_demux, 0, b"inrustwetrust\0", "parsing error\0");
      },
      nom::IResult::Incomplete(nom::Needed::Size(s)) => {
        vlc_Log!(p_demux, 0, b"inrustwetrust\0", "Incomplete(%d)\0", s as c_uint);
      }
      nom::IResult::Incomplete(nom::Needed::Unknown) => {
        vlc_Log!(p_demux, 0, b"inrustwetrust\0", "Incomplete\0");
      },
      nom::IResult::Done(i,h) => {
        vlc_Log!(p_demux, 0, b"inrustwetrust\0", "FOUND FLV FILE version: %d\n\0", h.version as c_uint);
        if h.audio {
          vlc_Log!(p_demux, 0, b"inrustwetrust\0", "has audio\0");
        }
        if h.video {
          vlc_Log!(p_demux, 0, b"inrustwetrust\0", "has video\0");
        }
        vlc_Log!(p_demux, 0, b"inrustwetrust\0", "offset: %d\0", h.offset);

        (*p_demux).pf_demux   = Some(demux);
        (*p_demux).pf_control = Some(control);

        vlc_Log!(p_demux, 0, b"inrustwetrust\0", "p_sys: %p\0", (*p_demux).p_sys);
        (*p_demux).p_sys = Box::into_raw(Box::new(demux_sys_t { i_pos: 9, i_size: 0 }));
        vlc_Log!(p_demux, 0, b"inrustwetrust\0", "p_sys: %p\0", (*p_demux).p_sys);

        if !stream_Seek((*p_demux).s, h.offset as uint64_t) {
          vlc_Log!(p_demux, 0, b"inrustwetrust\0", "couldn't seek past header\0");
        }

        return 0;
      },

    }
  //panic!("IN OPEN");
  }

  vlc_Log!(p_demux, 0, b"inrustwetrust\0", "in rust function OPEN %d\n", 42);
  -1
}

extern "C" fn close(p_demux: *mut demux_t<demux_sys_t>) {
  vlc_Log!(p_demux, 0, b"inrustwetrust\0", "in CLOSE\n");
  vlc_Log!(p_demux, 0, b"inrustwetrust\0", "p_sys: %p\0", (*p_demux).p_sys);
  unsafe {
    if (*p_demux).p_sys.is_null() { return }
    // drop the p_sys
    Box::from_raw((*p_demux).p_sys);
  }
}

unsafe extern "C" fn demux(p_demux: *mut demux_t<demux_sys_t>) -> c_int {
  vlc_Log!(p_demux, 0, b"inrustwetrust\0", "in DEMUX\n");
  let p_sys = (*p_demux).p_sys;
  vlc_Log!(p_demux, 0, b"inrustwetrust\0", "p_sys: %p\0", (*p_demux).p_sys);
  //let i_pos = stream_Tell((*p_demux).s);
  vlc_Log!(p_demux, 0, b"inrustwetrust\0", "position: %d\0", (*p_sys).i_pos);

  -1
}

unsafe extern "C" fn control(p_demux: *mut demux_t<demux_sys_t>, i_query: c_int, args: *const va_list) -> c_int {
  vlc_Log!(p_demux, 0, b"inrustwetrust\0", "in CONTROL\0");
  let p_sys = (*p_demux).p_sys;
  let res = demux_vaControlHelper((*p_demux).s, (*p_sys).i_pos as int64_t,
                                  ((*p_sys).i_pos + (*p_sys).i_size) as int64_t,
                                     0, 0, i_query, args);
  vlc_Log!(p_demux, 0, b"inrustwetrust\0", "CONTROL res: %d\0", res);

  res
}
