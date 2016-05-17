use libc::{uint8_t, uint64_t, size_t, ssize_t, c_void, c_int, c_uint};
use core::mem::transmute;
use core::slice::from_raw_parts;

pub use ffi::{VLCModuleProperties,vlc_Log,demux_t,vlc_object_t, va_list};

use ffi::{self, stream_t};

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

pub fn stream_Tell(stream: *mut stream_t) -> uint64_t {
  unsafe {
    ffi::stream_Tell(stream)
  }
}

pub fn stream_Seek(stream: *mut stream_t, index: uint64_t) -> bool {
  unsafe {
    return ffi::stream_Seek(stream, index) == 0
  }
}
