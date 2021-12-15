#include "call-cc-mutable-class/include/hello-world.h"

#include <iostream>

namespace demo {

using std::cout;
using std::endl;

void Testbot::say_hello_world() {
  this->x += 1;
  cout << "hello world with x = "<< x << endl;
}

std::unique_ptr<Testbot> new_testbot() {
  return std::make_unique<Testbot>();
}

}
