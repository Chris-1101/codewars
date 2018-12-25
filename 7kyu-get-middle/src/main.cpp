#include "specs.hpp"
#include "getmid.hpp"
using namespace std;

int main(void)
{
  Specs<string> tests;

  tests.create(Kata::get_middle("test"), "es");
  tests.create(Kata::get_middle("testing"), "t");
  tests.create(Kata::get_middle("middle"), "dd");
  tests.create(Kata::get_middle("A"), "A");

  tests.run();
  return 0;
}
