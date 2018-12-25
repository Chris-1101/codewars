#include "specs.hpp"
#include "revrot.hpp"
using namespace std;

int main(void)
{
  Specs<string> tests;

  tests.create(RevRot::revRot("123456987654", 6), "234561876549");
  tests.create(RevRot::revRot("123456987653", 6), "234561356789");
  tests.create(RevRot::revRot("66443875", 4), "44668753");
  tests.create(RevRot::revRot("66443875", 8), "64438756");
  tests.create(RevRot::revRot("664438769", 8), "67834466");
  tests.create(RevRot::revRot("123456779", 8), "23456771");
  tests.create(RevRot::revRot("", 8), "");
  tests.create(RevRot::revRot("123456779", 0), "");
  tests.create(RevRot::revRot("563000655734469485", 4), "0365065073456944");

  tests.run();
  return 0;
}
