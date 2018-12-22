#include "specs.hpp"
#include "romnum.hpp"
using namespace std;

int main(void)
{
  Specs<int> int_tests;
  Specs<string> str_tests;
  RomanNumeralsHelper NumeralsHelper;

  // Arabic to Roman Tests
  str_tests.create(NumeralsHelper.to_roman(   1),         "I");
  str_tests.create(NumeralsHelper.to_roman(   4),        "IV");
  str_tests.create(NumeralsHelper.to_roman(   9),        "IX");
  str_tests.create(NumeralsHelper.to_roman(  21),       "XXI");
  str_tests.create(NumeralsHelper.to_roman(1000),         "M");
  str_tests.create(NumeralsHelper.to_roman(1666),   "MDCLXVI");
  str_tests.create(NumeralsHelper.to_roman(1986), "MCMLXXXVI");
  str_tests.create(NumeralsHelper.to_roman(1990),     "MCMXC");
  str_tests.create(NumeralsHelper.to_roman(1999),   "MCMXCIX");
  str_tests.create(NumeralsHelper.to_roman(2008),    "MMVIII");
  str_tests.create(NumeralsHelper.to_roman(2018),   "MMXVIII");
  str_tests.create(NumeralsHelper.to_roman(3999), "MMMCMXCIX");

  // Roman to Arabic Tests
  int_tests.create(NumeralsHelper.from_roman(        "I"),    1);
  int_tests.create(NumeralsHelper.from_roman(       "IV"),    4);
  int_tests.create(NumeralsHelper.from_roman(       "IX"),    9);
  int_tests.create(NumeralsHelper.from_roman(      "XXI"),   21);
  int_tests.create(NumeralsHelper.from_roman(        "M"), 1000);
  int_tests.create(NumeralsHelper.from_roman(  "MDCLXVI"), 1666);
  int_tests.create(NumeralsHelper.from_roman("MCMLXXXVI"), 1986);
  int_tests.create(NumeralsHelper.from_roman(    "MCMXC"), 1990);
  int_tests.create(NumeralsHelper.from_roman(  "MCMXCIX"), 1999);
  int_tests.create(NumeralsHelper.from_roman(   "MMVIII"), 2008);
  int_tests.create(NumeralsHelper.from_roman(  "MMXVIII"), 2018);
  int_tests.create(NumeralsHelper.from_roman("MMMCMXCIX"), 3999);

  str_tests.run();
  int_tests.run();
  return 0;
}
