#include <map>
#include <string>
#include <algorithm>

#include "romnum.hpp"

std::string RomanNumeralsHelper::to_roman(int n)
{
  return "";
}

int RomanNumeralsHelper::from_roman(std::string roman)
{
  std::map<char, int> values = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
  };

  int total = 0, previous_value = 0;
  std::reverse(roman.begin(), roman.end());

  for (unsigned i = 0; i < roman.length(); i++)
  {
    int value = values[roman[i]];
    total += (value < previous_value) ? -value : value;
    previous_value = value;
  }
  return total;
}
