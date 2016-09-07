fn main() {
  //look for libvlccore in the current directory while in development
  println!("cargo:rustc-link-search=native=.");
}
