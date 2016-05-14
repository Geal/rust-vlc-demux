use libc::{c_char, c_void, free, malloc};

pub struct CString {
    inner: *mut c_char,
}

impl CString {
    pub fn new(s: &str) -> Result<CString, ()> {
        unsafe {
            let ptr: *mut c_char = malloc(s.len() + 1) as *mut c_char;
            if ptr.is_null() {
                Err(())
            } else {
                let s_ptr = s.as_ptr();
                let mut pos: isize = 0;
                while pos < s.len() as isize {
                    *ptr.offset(pos) = *s_ptr.offset(pos) as c_char;
                    pos += 1;
                }
                *ptr.offset(s.len() as isize) = 0;
                Ok(CString { inner: ptr })
            }
        }
    }

    pub fn as_ptr(&self) -> *const c_char {
        self.inner as *const c_char
    }

    pub fn as_mut_ptr(&self) -> *mut c_char {
        self.inner
    }
}

impl Drop for CString {
    fn drop(&mut self) {
        unsafe { free(self.inner as *mut c_void) }
    }
}