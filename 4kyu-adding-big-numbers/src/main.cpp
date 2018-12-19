#include "sumstr.hpp"
#include "specs.hpp"
using namespace std;

int main(int argc, char** argv)
{
  Specs<string> tests;

  tests.create(add("00", "000"), "0");
  tests.create(add("03", "010"), "13");
  tests.create(add("1007", "00330"), "1337");
  tests.create(add("201", "10456"), "10657");

  tests.run();
  return 0;
}
