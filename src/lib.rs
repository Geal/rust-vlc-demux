#![feature(lang_items)]
#![feature(start)]
#![allow(non_camel_case_types, dead_code)]

extern crate nom;
extern crate flavors;
extern crate core;
#[macro_use] extern crate va_list as rs_va_list;

#[link(name = "vlccore")] extern {}

#[macro_use]
mod vlc;

#[macro_use]
mod ffi;

mod traits;
mod types;

extern crate libc;
use libc::{size_t, c_int, c_void, c_uint, uint32_t, uint64_t, int64_t};
use std::boxed::Box;
use std::fmt;

use std::mem::{transmute,zeroed};
use vlc::{VLCModuleProperties, LogType, vlc_object_t, demux_t, va_list, block_t, mtime_t, es_format_t,
          vlc_fourcc_t, es_out_id_t};
use vlc::{stream_Peek, stream_Seek, stream_Read, stream_Block, vlc_Log,
          demux_vaControlHelper, es_format_Init, es_out_Send, es_out_Add};

pub use traits::*;
pub use types::*;

const PLUGIN_NAME: &'static [u8; 14] = b"inrustwetrust\0";

pub struct demux_sys_t {
  i_pos:  usize,
  i_size: usize,
  video_initialized: bool,
  video_es_format:   es_format_t,
  video_es_id:       *mut es_out_id_t,
  audio_initialized: bool,
  audio_es_format:   es_format_t,
  audio_es_id:       *mut es_out_id_t,
}

#[allow(non_snake_case)]
#[no_mangle]
pub extern fn vlc_entry__3_0_0a(vlc_set: unsafe extern fn(*mut c_void, *mut c_void, c_int, ...)
                                -> c_int,
  opaque: *mut c_void) -> c_int {
  let module: *mut c_void = 0 as *mut c_void;
  //let config: *mut c_void = 0 as *mut c_void;

  unsafe {
    if vlc_set(opaque, 0 as *mut c_void, VLCModuleProperties::VLC_MODULE_CREATE as i32,
               &module) != 0 {
      panic!("cannot create module");
      //return -1;
    }
  }

  unsafe {
    if vlc_set(opaque, module, VLCModuleProperties::VLC_MODULE_NAME as i32,
               PLUGIN_NAME.as_ptr()) != 0 {
      panic!("cannot set module name");
      //return -1;
    }
  }

  let desc = b"FLV demuxer written in Rust\0";
  unsafe {
    if vlc_set(opaque, module, VLCModuleProperties::VLC_MODULE_DESCRIPTION as i32,
               desc.as_ptr()) != 0 {
      panic!("cannot set module description");
      //return -1;
    }
  }

  let capability = b"demux\0";
  unsafe {
    if vlc_set(opaque, module, VLCModuleProperties::VLC_MODULE_CAPABILITY as i32,
               capability.as_ptr()) != 0 {
      panic!("cannot set module capability");
      //return -1;
    }
  }

  unsafe {
    if vlc_set(opaque, module, VLCModuleProperties::VLC_MODULE_SCORE as i32, 999) != 0 {
      panic!("cannot set module score");
      //return -1;
    }
  }

  unsafe {
    let p_open: extern "C" fn(*mut demux_t<demux_sys_t>) -> c_int =
      transmute(open as extern "C" fn(_) -> c_int);
    if vlc_set(opaque, module, VLCModuleProperties::VLC_MODULE_CB_OPEN as i32, p_open) != 0 {
      panic!("cannot set module open callback");
      //return -1;
    }
  }

  unsafe {
    let p_close: extern "C" fn(*mut demux_t<demux_sys_t>) = transmute(close as extern "C" fn(_));
    if vlc_set(opaque, module, VLCModuleProperties::VLC_MODULE_CB_CLOSE as i32, p_close) != 0 {
      panic!("cannot set module close callback");
      //return -1;
    }
  }
  //panic!("POUETPOUETPOUET");
  0
}

extern "C" fn open(p_demux: *mut demux_t<demux_sys_t>) -> c_int {
  let p_demux = unsafe { &mut (*p_demux) };
  vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "in rust function before stream_Peek {}\n", 42);

  let sl = stream_Peek(p_demux.s, 9);
  //vlc_Log!(p_demux, 0, PLUGIN_NAME, "got slice: %s\n\0", sl.as_ptr());

  match flavors::parser::header(sl) {
    nom::IResult::Error(_) => {
      vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "parsing error");
    },
    nom::IResult::Incomplete(nom::Needed::Size(s)) => {
      vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "Incomplete({})", s as c_uint);
    }
    nom::IResult::Incomplete(nom::Needed::Unknown) => {
      vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "Incomplete");
    },
    nom::IResult::Done(_,h) => {
      vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "FOUND FLV FILE version: {}\n",
      h.version as c_uint);
      if h.audio {
        vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "has audio");
      }
      if h.video {
        vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "has video");
      }
      vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "offset: {}", h.offset);

      p_demux.pf_demux   = Some(demux);
      p_demux.pf_control = Some(control);

      if !stream_Seek(p_demux.s, h.offset as uint64_t) {
        vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "couldn't seek past header");
      }

      p_demux.p_sys = Box::into_raw(Box::new(
          demux_sys_t {
            i_pos: h.offset as usize,
            i_size: 0,
            video_initialized: false,
            video_es_format: unsafe { zeroed() },
            video_es_id: 0 as *mut c_void,
            audio_initialized: false,
            audio_es_format: unsafe { zeroed() },
            audio_es_id: 0 as *mut c_void,
          }
          ));
      vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "p_sys: {:?}", p_demux.p_sys);

      return 0;
    },

  }

  vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "in rust function OPEN {}\n", 42);
  -1
}

extern "C" fn close(p_demux: *mut demux_t<demux_sys_t>) {
  let p_demux = unsafe { &mut (*p_demux) };
  vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "in CLOSE\n");
  vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "p_sys: {:?}", p_demux.p_sys);
  unsafe {
    if p_demux.p_sys.is_null() { return }
    // drop the p_sys
    Box::from_raw(p_demux.p_sys);
  }
}

extern "C" fn demux(p_demux: *mut demux_t<demux_sys_t>) -> c_int {
  let p_demux = unsafe { &mut (*p_demux) };
  //vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "in DEMUX");
  let p_sys = unsafe { &mut (*p_demux.p_sys) };
  let mut header = [0u8; 15];
  let sz = stream_Read(p_demux.s, &mut header);
  if sz < 15 {
    if sz == 4 {
      vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "got {} bytes, end of stream?", sz);
      return 0;
    } else {
      vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "could not read header, got: {} bytes", sz);
      return -1;
    }
  }

  let r = nom::be_u32(&header[..4]);
  if let nom::IResult::Done(_i, _o) = r {
    //vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "previous tag size: {}", o);
  } else {
    vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "could not parse");
    return -1;
  }

  let r = flavors::parser::tag_header(&header[4..]);
  match r {
    nom::IResult::Error(_) => {
      vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "tag_header error");
      return -1;
    },
    nom::IResult::Incomplete(_) => {
      vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "tag_header incomplete");
      return -1;
    },
    _ => {}
  }

  if let nom::IResult::Done(_remaining, header) = r {
  vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME,
           "tag_header: type={},\tsize={},\ttimestamp:{},\tstream_id: {}",
           header.tag_type as uint32_t, header.data_size, header.timestamp, header.stream_id);

    p_sys.i_pos += 15;
    p_sys.i_size = header.data_size as usize;

    match header.tag_type {
      flavors::parser::TagType::Audio => {
        vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "audio");
        /*if stream_Seek((*p_demux).s, header.data_size as uint64_t) {
          vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, b"advancing {} bytes\n",
                   header.data_size);
        }
        */
        let mut v_header = [0u8; 1];
        let sz = stream_Read(p_demux.s, &mut v_header);
        if sz < 1 {
          vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME,
                   "could not read audio header, got: {} bytes", sz);
          return -1;
        }
        if let nom::IResult::Done(_, vheader) = flavors::parser::audio_data_header(&v_header) {
          vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME,
                   "audio format: {:?}, rate: {:?}, size: {:?}, type: {:?}",
                   vheader.sound_format,
                   vheader.sound_rate,
                   vheader.sound_size,
                   vheader.sound_type);

          let p_block: *mut block_t = stream_Block((*p_demux).s, (header.data_size - 1) as size_t);
          if p_block == 0 as *mut block_t {
            vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "could not allocate block");
            return -1;
          }
          let p_block = unsafe { &mut(*p_block) };

          //let VLC_TS_INVALID: mtime_t = 0;
          let VLC_TS_0:       mtime_t = 1;
          p_block.i_dts = VLC_TS_0 + (header.timestamp as mtime_t *1000);
          p_block.i_pts = VLC_TS_0 + (header.timestamp as mtime_t *1000);

          if ! p_sys.audio_initialized {
            es_format_Init(&mut p_sys.audio_es_format,
                           ffi::es_format_category_e::AUDIO_ES,
                           audio_codec_id_to_fourcc(vheader.sound_format));
            p_sys.audio_es_format.audio.i_channels = match vheader.sound_type {
              flavors::parser::SoundType::SndMono   => 1,
              flavors::parser::SoundType::SndStereo => 2,
            };

            p_sys.audio_es_format.audio.i_rate = match vheader.sound_rate {
              flavors::parser::SoundRate::_5_5KHZ => 5500,
              flavors::parser::SoundRate::_11KHZ  => 11000,
              flavors::parser::SoundRate::_22KHZ  => 22050,
              flavors::parser::SoundRate::_44KHZ  => 44000,
            };
            p_sys.audio_es_format.audio.i_bitspersample = match vheader.sound_size {
              flavors::parser::SoundSize::Snd8bit => 8,
              flavors::parser::SoundSize::Snd16bit => 16,
            };
            p_sys.audio_es_format.i_bitrate =
              (p_sys.video_es_format.audio.i_rate * p_sys.video_es_format
                                                               .audio.i_bitspersample) as c_int;

            p_sys.audio_es_id = es_out_Add(p_demux.out, &mut p_sys.audio_es_format);
            p_sys.audio_initialized = true;
          }

          let out_ref = p_demux.out;
          unsafe {
            to_va_list!(move |v: rs_va_list::va_list| {
              let ES_OUT_SET_PCR = 6;
              let pf_control: fn(*mut c_void, c_int, rs_va_list::va_list) = transmute((*out_ref).pf_control);
              pf_control(out_ref as *mut c_void, ES_OUT_SET_PCR, v);
            }, p_block.i_pts);
          }
          es_out_Send(p_demux.out, p_sys.audio_es_id, p_block);

          vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "audio block of size {} sent\n",
                   header.data_size - 1);
          return 1;

          /*
        if stream_Seek((*p_demux).s, (header.data_size -1) as uint64_t) {
          //vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "advancing {} bytes\n",
                     header.data_size);
        }
          return 1;
          */
        }
        return -1;
      },
      flavors::parser::TagType::Script => {
        //vlc_Log!(p_demux, LogType::Info, b"inrustwetrust\0", "SCRIPT");
        if stream_Seek(p_demux.s, header.data_size as uint64_t) {
          //vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "advancing {} bytes\n",
          //         header.data_size);
        }
        return 1;
      },
      flavors::parser::TagType::Video => {
        //vlc_Log!(p_demux, LogType::Info, b"inrustwetrust\0", "video");
        let mut v_header = [0u8; 1];
        let sz = stream_Read(p_demux.s, &mut v_header);
        if sz < 1 {
          vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME,
                   "could not read header, got: {} bytes", sz);
          return -1;
        }
        if let nom::IResult::Done(_, vheader) = flavors::parser::video_data_header(&v_header) {
          vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "frame type: {:?}, codec id: {:?}",
                   vheader.frame_type, vheader.codec_id);


          let p_block: *mut block_t = stream_Block(p_demux.s, (header.data_size - 1) as size_t);
          if p_block == 0 as *mut block_t {
            vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "could not allocate block");
            return -1;
          }
          let p_block = unsafe { &mut(*p_block) };

          //let VLC_TS_INVALID: mtime_t = 0;
          let VLC_TS_0:       mtime_t = 1;
          p_block.i_dts = VLC_TS_0 + (header.timestamp as mtime_t *1000);
          p_block.i_pts = VLC_TS_0 + (header.timestamp as mtime_t *1000);

          if ! p_sys.video_initialized {
            es_format_Init(&mut p_sys.video_es_format,
                           ffi::es_format_category_e::VIDEO_ES,
                           video_codec_id_to_fourcc(vheader.codec_id));

            p_sys.video_es_id = es_out_Add(p_demux.out, &mut p_sys.video_es_format);
            p_sys.video_initialized = true;
          }

          let out_ref = p_demux.out;
          unsafe {
            to_va_list!(move |v: rs_va_list::va_list| {
              let ES_OUT_SET_PCR = 6;
              let pf_control: fn(*mut c_void, c_int, rs_va_list::va_list) = transmute((*out_ref).pf_control);
              pf_control(out_ref as *mut c_void, ES_OUT_SET_PCR, v);
            }, p_block.i_pts);
          }
          es_out_Send(p_demux.out, p_sys.video_es_id, p_block);

          vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "video block of size {} sent\n",
                   header.data_size - 1);
          return 1;
        }

      },

    }
  }

  //let i_pos = stream_Tell((*p_demux).s);
  vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "new position: {}", p_sys.i_pos);

  -1
}

extern "C" fn control(p_demux: *mut demux_t<demux_sys_t>, i_query: c_int,
                             args: *const va_list) -> c_int {
  let p_demux = unsafe { &mut (*p_demux) };
  vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "in CONTROL");
  let p_sys = unsafe { &mut (*p_demux.p_sys) };
  let res = demux_vaControlHelper(p_demux.s, p_sys.i_pos as int64_t,
                                  (p_sys.i_pos + p_sys.i_size) as int64_t,
                                     0, 0, i_query, args);
  vlc_Log!(p_demux, LogType::Info, PLUGIN_NAME, "CONTROL res: {}", res);

  res
}

pub fn audio_codec_id_to_fourcc(id: flavors::parser::SoundFormat) -> vlc_fourcc_t {
  match id {
    flavors::parser::SoundFormat::PCM_BE                => vlc_fourcc!('l','p','c','m'),
    flavors::parser::SoundFormat::ADPCM                 => vlc_fourcc!('S','W','F','a'),
    flavors::parser::SoundFormat::MP3                   => vlc_fourcc!('m','p','3',' '),
    flavors::parser::SoundFormat::PCM_LE                => vlc_fourcc!('l','p','c','m'),
    flavors::parser::SoundFormat::NELLYMOSER_16KHZ_MONO => vlc_fourcc!('N','E','L','L'),
    flavors::parser::SoundFormat::NELLYMOSER_8KHZ_MONO  => vlc_fourcc!('N','E','L','L'),
    flavors::parser::SoundFormat::NELLYMOSER            => vlc_fourcc!('N','E','L','L'),
    flavors::parser::SoundFormat::PCM_ALAW              => vlc_fourcc!('a','l','a','w'),
    flavors::parser::SoundFormat::PCM_ULAW              => vlc_fourcc!('u','l','a','w'),
    flavors::parser::SoundFormat::AAC                   => vlc_fourcc!('m','p','4','a'),
    flavors::parser::SoundFormat::SPEEX                 => vlc_fourcc!('s','p','x',' '),
    flavors::parser::SoundFormat::MP3_8KHZ              => vlc_fourcc!('m','p','3',' '),
    flavors::parser::SoundFormat::DEVICE_SPECIFIC       => vlc_fourcc!('u','n','d','f'),
  }
}

pub fn video_codec_id_to_fourcc(id: flavors::parser::CodecId) -> vlc_fourcc_t {
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
