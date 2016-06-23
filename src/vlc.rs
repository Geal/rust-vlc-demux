#![allow(non_snake_case)]

use libc::{uint8_t, uint64_t, int64_t, size_t, ssize_t, c_void, c_int};
use std::slice::from_raw_parts;

pub use ffi::{VLCModuleProperties,vlc_Log,demux_t,vlc_object_t, va_list, block_t, mtime_t, es_format_t,
                vlc_fourcc_t, es_out_t, es_out_id_t};

use ffi::{self, stream_t, es_format_category_e};

pub fn stream_Peek<'a>(stream: *mut stream_t, size: size_t) -> &'a[u8] {
  let mut buf = 0 as *const uint8_t;
  unsafe {
    //let sz = ffi::stream_Peek(stream, buf as *mut *const u8, size);
    let sz = ffi::stream_Peek(stream, &mut buf, size);
    //FIXME: what if returned sz is negative? (error)
    if sz > 0 {
      from_raw_parts(buf, sz as usize)
    } else {
      &[]
    }
  }
}

pub fn stream_Read(stream: *mut stream_t, buf: &mut [u8]) -> ssize_t {
  unsafe {
    ffi::stream_Read(stream, buf.as_mut_ptr() as *const c_void, buf.len())
  }
}

// FIXME: _stream_Tell and _stream_Seek are not exported by libvlccore, why?
pub fn stream_Tell(stream: *mut stream_t) -> uint64_t {
  unsafe {
    ffi::stream_Tell(stream)
  }
}

pub fn stream_Seek(stream: *mut stream_t, index: uint64_t) -> bool {
  unsafe {
    ffi::stream_Read(stream, 0 as *const c_void, index as size_t) == index as ssize_t
  }
}

pub fn stream_Block(stream: *mut stream_t, size: size_t) -> *mut block_t {
  unsafe {
    ffi::stream_Block(stream, size)
  }
}

pub fn es_format_Init(format: *mut es_format_t, i_cat: es_format_category_e,
                      i_codec: vlc_fourcc_t) {
  unsafe { ffi::es_format_Init(format, i_cat as i32, i_codec) }
}

pub fn es_out_Send(out: *mut es_out_t, id: *mut es_out_id_t, p_block: *mut block_t) -> c_int {
  // FIXME: should not unwrap without checks
  unsafe { ((*out).pf_send.as_ref().unwrap())( out, id, p_block ) }
}

pub fn es_out_Add(out: *mut es_out_t, fmt: *mut es_format_t) -> *mut es_out_id_t {
  unsafe { ((*out).pf_add.as_ref().unwrap())( out, fmt ) }
}

pub fn demux_vaControlHelper(stream: *mut stream_t, i_start: int64_t, i_end: int64_t,
                             i_bitrate: int64_t, i_align: c_int, i_query: c_int,
                             args: *const va_list) -> c_int {
  unsafe {
    ffi::demux_vaControlHelper(stream, i_start, i_end, i_bitrate, i_align, i_query, args)
  }
}
