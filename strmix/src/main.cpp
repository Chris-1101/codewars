#include <iostream>
#include <string>

#include "strmix.hpp"
using namespace std;

void unit_test(const string &test1, const string &test2, const string &expected)
{
  string red = "\033[1;31m";
  string green = "\033[1;32m";
  string reset = "\033[0m";

  string actual = Mix::strMix(test1, test2);
  string status = (actual == expected) ? green + "✔ passed" + reset : red + "✘ failed" + reset;

  cout << "Test     : Mix::strMix(\"" << test1 << "\", \"" << test2 << "\")\n";
  cout << "Result   : " << actual << "\n";
  cout << "Expected : " << expected << "\n";
  cout << "Status   : " << status << "\n";
  cout << endl;
}

int main()
{
  string s1 = "my&friend&Paul has heavy hats! &";
  string s2 = "my friend John has many many friends &";
  string res = "2:nnnnn/1:aaaa/1:hhh/2:mmm/2:yyy/2:dd/2:ff/2:ii/2:rr/=:ee/=:ss";
  unit_test(s1, s2, res);

  s1 = "mmmmm m nnnnn y&friend&Paul has heavy hats! &";
  s2 = "my frie n d Joh n has ma n y ma n y frie n ds n&";
  res = "1:mmmmmm/=:nnnnnn/1:aaaa/1:hhh/2:yyy/2:dd/2:ff/2:ii/2:rr/=:ee/=:ss";
  unit_test(s1, s2, res);

  s1 = "Are the kids at home? aaaaa fffff";
  s2 = "Yes they are here! aaaaa fffff";
  res = "=:aaaaaa/2:eeeee/=:fffff/1:tt/2:rr/=:hh";
  unit_test(s1, s2, res);

  return 0;
}
