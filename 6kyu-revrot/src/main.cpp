#include <iostream>
#include <string>

#include "revrot.hpp"
using namespace std;

void unit_test(const string test, const int chunk, const string expected)
{
  string red = "\033[1;31m";
  string green = "\033[1;32m";
  string reset = "\033[0m";

  string actual = RevRot::revRot(test, chunk);
  string status = (actual == expected) ? green + "✔ passed" + reset : red + "✘ failed" + reset;

  cout << "Test     : RevRot::revRot(\"" << test << "\", " << chunk << ")\n";
  cout << "Result   : " << actual << "\n";
  cout << "Expected : " << expected << "\n";
  cout << "Status   : " << status << "\n";
  cout << endl;
}

int main()
{
  unit_test("123456987654", 6, "234561876549");
  unit_test("123456987653", 6, "234561356789");
  unit_test("66443875", 4, "44668753");
  unit_test("66443875", 8, "64438756");
  unit_test("664438769", 8, "67834466");
  unit_test("123456779", 8, "23456771");
  unit_test("", 8, "");
  unit_test("123456779", 0, "");
  unit_test("563000655734469485", 4, "0365065073456944");

  return 0;
}
