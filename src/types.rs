use libc::{c_char, c_void, free, malloc};
use core;

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

pub struct VlcBox<T: ?Sized> {
    inner: *mut T,
    counter: *mut u32,
}

impl<T> VlcBox<T> {
    pub fn new(mut t: T) -> VlcBox<T> {
        unsafe {
            let size = core::mem::size_of::<T>();
            let tx = malloc(size) as *mut u8;
            let counter = malloc(4) as *mut u32;
            *counter = 1;
            let x = &mut t;
            let c_x = x as *mut _ as *mut u8;
            for pos in 0..size {
                *tx.offset(pos as isize) = *c_x.offset(pos as isize);
            }
            VlcBox {
                inner: tx as *mut T,
                counter: counter,
            }
        }
    }
}

impl<T> core::ops::Deref for VlcBox<T> {
    type Target = T;

    fn deref(&self) -> &T {
        unsafe { &*self.inner }
    }
}

impl<T> core::ops::DerefMut for VlcBox<T> {
    fn deref_mut(&mut self) -> &mut T {
        unsafe { &mut *self.inner }
    }
}

impl<T> Clone for VlcBox<T> {
    fn clone(&self) -> VlcBox<T> {
        unsafe {*self.counter += 1; }   
        VlcBox {
            inner: self.inner,
            counter: self.counter,
        }
    }
}

impl<T: ?Sized> Drop for VlcBox<T> {
    fn drop(&mut self) {
        unsafe {
            *self.counter -= 1;
            if *self.counter < 1 {
                free(self.inner as *mut c_void);
                free(self.counter as *mut c_void);
            }
        }
    }
}
