use libc::c_char;
use CString;

pub trait ToC<'a, P: Copy> {
    type Storage;

    fn to_c(&self) -> P;
}

impl<'a> ToC<'a, *const c_char> for str {
    type Storage = CString;

    fn to_c(&self) -> *const c_char {
        let c_str = CString::new(self).unwrap();
        c_str.as_ptr()
    }
}

/*impl<'a> ToC<'a, *mut c_char> for str {
    type Storage = CString;

    fn to_c(&self) -> *mut c_char {
        let c_str = CString::new(self).unwrap();
        c_str.as_mut_ptr()
    }
}*/
