#include <map>
#include <vector>
#include <algorithm>

#include "romnum.hpp"

// Conversion to Roman Numerals (String)
std::string RomanNumeralsHelper::to_roman(int num)
{
  // Dictionaries
  std::map<int, char> numerals
  ({
    {  100, 'C' }, { 10, 'X' }, { 1, 'I' },
    {  500, 'D' }, { 50, 'L' }, { 5, 'V' },
    { 1000, 'M' }
  });
  std::map<short, std::vector<std::string>> substitutions
  ({
    {0, { "DCCCC", "CM" }}, {3, { "CCCC", "CD" }},
    {1, { "LXXXX", "XC" }}, {4, { "XXXX", "XL" }},
    {2, { "VIIII", "IX" }}, {5, { "IIII", "IV" }}
  });
  std::string result = "";

  // Generate old roman numeral
  for (auto it = numerals.rbegin(); it != numerals.rend(); it++)
  {
    int value = it->first;
    char numeral = it->second;
    for (; num >= value; num -= value) result += numeral;
  }
  // Replace old numeral substrings with modern equivalents
  for (auto it = substitutions.begin(); it != substitutions.end(); it++)
  {
    std::string old_numeral = it->second[0];
    std::string new_numeral = it->second[1];
    size_t match = result.find(old_numeral);

    if (match != std::string::npos)
      result.replace(match, old_numeral.length(), new_numeral);
  }
  return result;
}

// Conversion to Arabic Numerals (Integer)
int RomanNumeralsHelper::from_roman(std::string roman)
{
  std::map<char, int> values
  ({
    { 'C',  100 }, { 'X', 10 }, { 'I', 1 },
    { 'D',  500 }, { 'L', 50 }, { 'V', 5 },
    { 'M', 1000 }
  });

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
