extern crate gcc;

fn main() {
  gcc::Config::new().file("src/wrapper.c").compile("libwrapper.a");
}
