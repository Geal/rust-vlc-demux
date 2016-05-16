use libc::{uint8_t, size_t, ssize_t, c_void, c_int, c_uint};
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
    from_raw_parts(buf, sz as usize)
  }
}
