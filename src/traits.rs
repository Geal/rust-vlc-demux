use libc::{c_char, c_int};
use CString;
use vlc::LogType;

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

impl<'a> ToC<'a, c_int> for LogType {
    type Storage = c_int;

    fn to_c(&self) -> c_int {
        match *self {
            LogType::Info => 0,
            LogType::Error => 1,
            LogType::Warning => 2,
            LogType::Debug => 3,
        }
    }
}

/*impl<'a> ToC<'a, *mut c_char> for str {
    type Storage = CString;

    fn to_c(&self) -> *mut c_char {
        let c_str = CString::new(self).unwrap();
        c_str.as_mut_ptr()
    }
}*/
