#include <string>

#include "factorial.hpp"
#include "unittest.hpp"
using namespace std;

// Compiled using:
// g++ src/main.cpp src/factorial.cpp -o bin/main -Wall -iquote include/ -iquote ../unit-test/ -g

int main(void)
{
  unit_test<string, string>(factorial( 5), "120");
  unit_test<string, string>(factorial(13), "6227020800");
  unit_test<string, string>(factorial(25), "15511210043330985984000000");
}
