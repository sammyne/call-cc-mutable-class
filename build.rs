fn main() {
  cxx_build::bridge("src/main.rs")
      .file("src/hello-world.cc")
      .flag_if_supported("-std=c++17")
      .compile("hello-world");

  println!("cargo:rerun-if-changed=src/main.rs");
  println!("cargo:rerun-if-changed=src/hello-world.cc");
  println!("cargo:rerun-if-changed=include/hello-world.h");
}
