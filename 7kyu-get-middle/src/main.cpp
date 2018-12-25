#include <iostream>
#include <string>

#include "getmid.hpp"
using namespace std;

void unit_test(const string test, const string expected)
{
  string red = "\033[1;31m";
  string green = "\033[1;32m";
  string reset = "\033[0m";

  string actual = Kata::get_middle(test);
  string status = (actual == expected) ? green + "✔ passed" + reset : red + "✘ failed" + reset;

  cout << "Test     : Kata::get_middle(\"" << test << "\")\n";
  cout << "Result   : " << actual << "\n";
  cout << "Expected : " << expected << "\n";
  cout << "Status   : " << status << "\n";
  cout << endl;
}

int main()
{
  unit_test("test", "es");
  unit_test("testing", "t");
  unit_test("middle", "dd");
  unit_test("A", "A");

  return 0;
}
