#pragma once

#include <memory>

#include "rust/cxx.h"

namespace demo {
  
class Testbot {
  public:
    void say_hello_world();
  
  private:
    int x;
};

std::unique_ptr<Testbot> new_testbot();

}