# call-cc-mutable class

This example failed to build as follow

```bash
error: failed to run custom build command for `call-cc-mutable-class v0.1.0 (/github.com/sammyne/call-cc-mutable-class)`

Caused by:
  process didn't exit successfully: `/github.com/sammyne/call-cc-mutable-class/target/debug/build/call-cc-mutable-class-a20b9e389db3e0ce/build-script-build` (exit status: 1)
  --- stderr

  error[cxxbridge]: needs a cxx::ExternType impl in order to be used as a non-pinned mutable reference in signature of `say_hello_world`
    ┌─ src/main.rs:8:9
    │
  8 │         type Testbot;
    │         ^^^^^^^^^^^^ needs a cxx::ExternType impl in order to be used as a non-pinned mutable reference in signature of `say_hello_world`


  error[cxxbridge]: mutable reference to opaque C++ type requires a pin -- use `self: Pin<&mut Testbot>`
     ┌─ src/main.rs:12:28
     │
  12 │         fn say_hello_world(&mut self);
     │                            ^^^^^^^^^ mutable reference to opaque C++ type requires a pin -- use `self: Pin<&mut Testbot>`

warning: build failed, waiting for other jobs to finish...
error: build failed
```


where `say_hello_world` would increment `Testbot.x`.
Really appreciate if someone can help me to make mutable reference work for opaque C++ type.
