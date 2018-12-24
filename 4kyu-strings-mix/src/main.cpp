#include <string>

#include "specs.hpp"
#include "strmix.hpp"
using namespace std;

int main(void)
{
  Specs<string> tests;

  string s1 = "my&friend&Paul has heavy hats! &";
  string s2 = "my friend John has many many friends &";
  string res = "2:nnnnn/1:aaaa/1:hhh/2:mmm/2:yyy/2:dd/2:ff/2:ii/2:rr/=:ee/=:ss";
  tests.create(Mix::strMix(s1, s2), res);

  s1 = "mmmmm m nnnnn y&friend&Paul has heavy hats! &";
  s2 = "my frie n d Joh n has ma n y ma n y frie n ds n&";
  res = "1:mmmmmm/=:nnnnnn/1:aaaa/1:hhh/2:yyy/2:dd/2:ff/2:ii/2:rr/=:ee/=:ss";
  tests.create(Mix::strMix(s1, s2), res);

  s1 = "Are the kids at home? aaaaa fffff";
  s2 = "Yes they are here! aaaaa fffff";
  res = "=:aaaaaa/2:eeeee/=:fffff/1:tt/2:rr/=:hh";
  tests.create(Mix::strMix(s1, s2), res);

  tests.run();
  return 0;
}
