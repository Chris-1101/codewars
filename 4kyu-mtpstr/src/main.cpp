#include "unittest.hpp"
#include "mtpstr.hpp"
using namespace std;

// Compiled using:
// g++ src/main.cpp src/mtpstr.cpp -o bin/main -Wall -iquote include/ -iquote ../unit-test/ -g

int main(void)
{
  // Basic Tests
  unit_test<string, string>(multiply("2", "3"), "6");
  unit_test<string, string>(multiply("11", "85"), "935");
  unit_test<string, string>(multiply("30", "69"), "2070");
  unit_test<string, string>(multiply("32", "756"), "24192");
  unit_test<string, string>(multiply("756", "32"), "24192");

  // Fringe Tests
  unit_test<string, string>(multiply("2", "0"), "0");
  unit_test<string, string>(multiply("0", "30"), "0");
  unit_test<string, string>(multiply("0000001", "3"), "3");
  unit_test<string, string>(multiply("1009", "03"), "3027");

  // Numbers Exceeding 2^64
  unit_test<string, string>(multiply("98765", "56894"), "5619135910");
  unit_test<string, string>(multiply("1020303004875647366210", "2774537626200857473632627613"), "2830869077153280552556547081187254342445169156730");
  unit_test<string, string>(multiply("58608473622772837728372827", "7586374672263726736374"), "444625839871840560024489175424316205566214109298");
  unit_test<string, string>(multiply("9007199254740991", "9007199254740991"), "81129638414606663681390495662081");

  return 0;
}
