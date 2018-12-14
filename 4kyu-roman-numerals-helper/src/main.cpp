#include <iostream>

#include "romnum.hpp"
#include "unittest.hpp"
using namespace std;

// Compiled using
// g++ src/main.cpp src/romnum.cpp -o bin/main -Wall -iquote include/ -iquote ../unit-test/ -g

int main(void)
{
  RomanNumeralsHelper NumeralsHelper;

  // Arabic to Roman Tests
  cout << "Arabic to Roman Tests\n";
  cout << "---------------------" << endl;
  unit_test<string, string>(NumeralsHelper.to_roman(   1),         "I");
  unit_test<string, string>(NumeralsHelper.to_roman(   4),        "IV");
  unit_test<string, string>(NumeralsHelper.to_roman(   9),        "IX");
  unit_test<string, string>(NumeralsHelper.to_roman(  21),       "XXI");
  unit_test<string, string>(NumeralsHelper.to_roman(1000),         "M");
  unit_test<string, string>(NumeralsHelper.to_roman(1666),   "MDCLXVI");
  unit_test<string, string>(NumeralsHelper.to_roman(1986), "MCMLXXXVI");
  unit_test<string, string>(NumeralsHelper.to_roman(1990),     "MCMXC");
  unit_test<string, string>(NumeralsHelper.to_roman(1999),   "MCMXCIX");
  unit_test<string, string>(NumeralsHelper.to_roman(2008),    "MMVIII");
  unit_test<string, string>(NumeralsHelper.to_roman(2018),   "MMXVIII");
  unit_test<string, string>(NumeralsHelper.to_roman(3999), "MMMCMXCIX");

  // Roman to Arabic Tests
  cout << "Roman to Arabic Tests\n";
  cout << "---------------------" << endl;
  unit_test<int, int>(NumeralsHelper.from_roman(        "I"),    1);
  unit_test<int, int>(NumeralsHelper.from_roman(       "IV"),    4);
  unit_test<int, int>(NumeralsHelper.from_roman(       "IX"),    9);
  unit_test<int, int>(NumeralsHelper.from_roman(      "XXI"),   21);
  unit_test<int, int>(NumeralsHelper.from_roman(        "M"), 1000);
  unit_test<int, int>(NumeralsHelper.from_roman(  "MDCLXVI"), 1666);
  unit_test<int, int>(NumeralsHelper.from_roman("MCMLXXXVI"), 1986);
  unit_test<int, int>(NumeralsHelper.from_roman(    "MCMXC"), 1990);
  unit_test<int, int>(NumeralsHelper.from_roman(  "MCMXCIX"), 1999);
  unit_test<int, int>(NumeralsHelper.from_roman(   "MMVIII"), 2008);
  unit_test<int, int>(NumeralsHelper.from_roman(  "MMXVIII"), 2018);
  unit_test<int, int>(NumeralsHelper.from_roman("MMMCMXCIX"), 3999);

  return 0;
}
