#include "specs.hpp"
#include "mtpstr.hpp"
using namespace std;

// Compiled using:
// g++ src/main.cpp src/mtpstr.cpp -o bin/main -Wall -iquote include/ -iquote ../modules/ -g

int main(void)
{
  Specs<string> tests;

  // Basic Tests
  tests.create(multiply("2", "3"), "6");
  tests.create(multiply("11", "85"), "935");
  tests.create(multiply("30", "69"), "2070");
  tests.create(multiply("32", "756"), "24192");
  tests.create(multiply("756", "32"), "24192");

  // Fringe Tests
  tests.create(multiply("2", "0"), "0");
  tests.create(multiply("0", "30"), "0");
  tests.create(multiply("0000001", "3"), "3");
  tests.create(multiply("1009", "03"), "3027");

  // Numbers Exceeding 2^64
  tests.create(multiply("98765", "56894"), "5619135910");
  tests.create(multiply("1020303004875647366210", "2774537626200857473632627613"), "2830869077153280552556547081187254342445169156730");
  tests.create(multiply("58608473622772837728372827", "7586374672263726736374"), "444625839871840560024489175424316205566214109298");
  tests.create(multiply("9007199254740991", "9007199254740991"), "81129638414606663681390495662081");

  tests.run();
  return 0;
}
