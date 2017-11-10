#include "test.h"
#include <iostream>

Test::Test(int i) : value(i) {}

void Test::print() {
  std::cout << "Hello World" << value << std::endl;
}