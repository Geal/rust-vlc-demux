#![feature(lang_items)]
#![feature(start)]
#![allow(non_camel_case_types, dead_code)]

extern crate nom;
extern crate flavors;
extern crate core;

mod vlc;

#[macro_use]
mod ffi;

mod traits;
mod types;

extern crate libc;
use libc::{size_t, c_int, c_char, c_void, c_uint, uint8_t, uint32_t, uint64_t, int64_t};
use std::boxed::Box;

use std::mem::{transmute,zeroed};
use vlc::{VLCModuleProperties, vlc_object_t, demux_t, va_list, block_t, mtime_t, es_format_t, vlc_fourcc_t,
          es_out_id_t};
use vlc::{stream_Peek, stream_Seek, stream_Read, stream_Tell, stream_Block, vlc_Log, demux_vaControlHelper,
            es_format_Init, es_out_Send, es_out_Add};


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
  video_initialized: bool,
  video_es_format: es_format_t,
  video_es_id:     *mut es_out_id_t,
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
    //vlc_Log!(p_demux, 0, b"inrustwetrust\0", "got slice: %s\n\0", sl.as_ptr());

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

        if !stream_Seek((*p_demux).s, h.offset as uint64_t) {
          vlc_Log!(p_demux, 0, b"inrustwetrust\0", "couldn't seek past header\0");
        }

        (*p_demux).p_sys = Box::into_raw(Box::new(
          demux_sys_t {
            i_pos: h.offset as usize,
            i_size: 0,
            video_initialized: false,
            video_es_format: unsafe { zeroed() },
            video_es_id: 0 as *mut c_void,
          }
        ));
        vlc_Log!(p_demux, 0, b"inrustwetrust\0", "p_sys: %p\0", (*p_demux).p_sys);

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
  //vlc_Log!(p_demux, 0, b"inrustwetrust\0", "in DEMUX\0");
  let p_sys = (*p_demux).p_sys;
  let mut header = [0u8; 15];
  let sz = stream_Read((*p_demux).s, &mut header);
  if sz < 15 {
    vlc_Log!(p_demux, 0, b"inrustwetrust\0", "could not read header, got: %d bytes\0", sz);
    return -1;
  }

  let r = nom::be_u32(&header[..4]);
  if let nom::IResult::Done(i,o) = r {
    //vlc_Log!(p_demux, 0, b"inrustwetrust\0", "previous tag size: %d\0", o);
  } else {
    vlc_Log!(p_demux, 0, b"inrustwetrust\0", "could not parse\0");
    return -1;
  }

  let r = flavors::parser::tag_header(&header[4..]);
  match r {
    nom::IResult::Error(_) => {
      vlc_Log!(p_demux, 0, b"inrustwetrust\0", "tag_header error\0");
      return -1;
    },
    nom::IResult::Incomplete(_) => {
      vlc_Log!(p_demux, 0, b"inrustwetrust\0", "tag_header incomplete\0");
      return -1;
    },
    _ => {}
  }

  if let nom::IResult::Done(remaining, header) = r {
  vlc_Log!(p_demux, 0, b"inrustwetrust\0",
           b"tag_header: type=%d,\tsize=%d,\ttimestamp:%d,\tstream_id: %d\0",
           header.tag_type as uint32_t, header.data_size, header.timestamp, header.stream_id);

    (*p_sys).i_pos += 15;
    (*p_sys).i_size = header.data_size as usize;

    match header.tag_type {
      flavors::parser::TagType::Audio => {
        vlc_Log!(p_demux, 0, b"inrustwetrust\0", "audio\0");
        /*if stream_Seek((*p_demux).s, header.data_size as uint64_t) {
          vlc_Log!(p_demux, 0, b"inrustwetrust\0", b"advancing %d bytes\n\0", header.data_size);
        }
        */
        let mut v_header = [0u8; 1];
        let sz = stream_Read((*p_demux).s, &mut v_header);
        if sz < 1 {
          vlc_Log!(p_demux, 0, b"inrustwetrust\0",
                   b"could not read audio header, got: %d bytes\0", sz);
          return 0;
        }
        if let nom::IResult::Done(_, vheader) = flavors::parser::audio_data_header(&v_header) {
          vlc_Log!(p_demux, 0, b"inrustwetrust\0",
                   "audio format: %s, rate: %s, size: %s, type: %s",
                   format!("{:?}", vheader.sound_format).to_c(),
                   format!("{:?}", vheader.sound_rate).to_c(),
                   format!("{:?}", vheader.sound_size).to_c(),
                   format!("{:?}", vheader.sound_type).to_c());
        if stream_Seek((*p_demux).s, (header.data_size -1) as uint64_t) {
          //vlc_Log!(p_demux, 0, b"inrustwetrust\0", "advancing %d bytes\n\0", header.data_size);
        }
          return 1;
        }
        return 0;
      },
      flavors::parser::TagType::Script => {
        //vlc_Log!(p_demux, 0, b"inrustwetrust\0", "SCRIPT\0");
        if stream_Seek((*p_demux).s, header.data_size as uint64_t) {
          //vlc_Log!(p_demux, 0, b"inrustwetrust\0", "advancing %d bytes\n\0", header.data_size);
        }
        return 1;
      },
      flavors::parser::TagType::Video => {
        //vlc_Log!(p_demux, 0, b"inrustwetrust\0", "video\0");
        let mut v_header = [0u8; 1];
        let sz = stream_Read((*p_demux).s, &mut v_header);
        if sz < 1 {
          vlc_Log!(p_demux, 0, b"inrustwetrust\0", b"could not read header, got: %d bytes\0", sz);
          return 0;
        }
        if let nom::IResult::Done(_, vheader) = flavors::parser::video_data_header(&v_header) {
          vlc_Log!(p_demux, 0, b"inrustwetrust\0", b"frame type: %d, codec id: %d\0",
                   vheader.frame_type, vheader.codec_id);


          let p_block: *mut block_t = stream_Block((*p_demux).s, (header.data_size - 1) as size_t);
          if p_block == 0 as *mut block_t {
            vlc_Log!(p_demux, 0, b"inrustwetrust\0", b"could not allocate block\0");
            return 0;
          }

          // FIXME: timing is complete garbage. Dividing timestamp slows things down
          // and shows frames, aparently
          (*p_block).i_dts = (header.timestamp / 1000) as mtime_t;
          (*p_block).i_pts = (header.timestamp / 1000) as mtime_t;
          // is pts and dts really broken for FLV?
          //(*p_block).i_dts = 0;
          //(*p_block).i_pts = 0;

          if ! (*p_sys).video_initialized {
            let VIDEO_ES = 1;
            es_format_Init(&mut (*p_sys).video_es_format, VIDEO_ES, codec_id_to_fourcc(vheader.codec_id));

            (*p_sys).video_es_id = es_out_Add((*p_demux).out, &mut (*p_sys).video_es_format);
            (*p_sys).video_initialized = true;
          }
          es_out_Send((*p_demux).out, (*p_sys).video_es_id, p_block);

          vlc_Log!(p_demux, 0, b"inrustwetrust\0", b"block of size %d sent\n\0", header.data_size - 1);
          return 1;
        }

      },

    }
  }

  //let i_pos = stream_Tell((*p_demux).s);
  vlc_Log!(p_demux, 0, b"inrustwetrust\0", b"new position: %d\0", (*p_sys).i_pos);

  -1
}

unsafe extern "C" fn control(p_demux: *mut demux_t<demux_sys_t>, i_query: c_int, args: *const va_list) -> c_int {
  vlc_Log!(p_demux, 0, b"inrustwetrust\0", b"in CONTROL\0");
  let p_sys = (*p_demux).p_sys;
  let res = demux_vaControlHelper((*p_demux).s, (*p_sys).i_pos as int64_t,
                                  ((*p_sys).i_pos + (*p_sys).i_size) as int64_t,
                                     0, 0, i_query, args);
  vlc_Log!(p_demux, 0, b"inrustwetrust\0", b"CONTROL res: %d\0", res);

  res
}


pub fn codec_id_to_fourcc(id: flavors::parser::CodecId) -> vlc_fourcc_t {
  match id {
  flavors::parser::CodecId::JPEG    => vlc_fourcc!('j','p','e','g'),
  flavors::parser::CodecId::H263    => vlc_fourcc!('F','L','V','1'),
  flavors::parser::CodecId::SCREEN  => vlc_fourcc!('F','S','V','1'),
  flavors::parser::CodecId::VP6     => vlc_fourcc!('V','P','6','F'),
  flavors::parser::CodecId::VP6A    => vlc_fourcc!('V','P','6','A'),
  flavors::parser::CodecId::SCREEN2 => vlc_fourcc!('F','S','V','2'),
  flavors::parser::CodecId::H264    => vlc_fourcc!('h','2','6','4'),
  }
}

