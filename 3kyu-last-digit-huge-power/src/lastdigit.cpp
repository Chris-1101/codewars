#include <list>
#include <cmath>

#include "lastdigit.hpp"

int last_digit(std::list<int> arr)
{
  // Break conditions, extract last digit
  if (arr.size() == 1) return arr.back() % 10;
  if (arr.size() == 0) return 1;

  // Extract the last 2 items in the list
  std::list<int> power(std::prev(arr.end(), 2), arr.end());
  arr.pop_back(); arr.pop_back();

  // Treat them as the base and exponent for this recursion
  long base = power.front(), exponent = power.back(), next;

  // Calculate the current power
  switch (exponent)                                                      // The last digit of a huge power will be the same as that of
  {                                                                      // a reduced power consisting of the first digit of the base
    case 0 : next = 1; break;                                            // (hence the mod 10) raised to the last two digits of the
    case 1 : next = base % 100; break;                                   // exponent (hence the mod 100). Last digit in the result of a
    default: next = (long)std::pow(base % 10, exponent % 4 + 4) % 100;   // power repeat in a pattern of 4 at most, so we can use mod 4
  }                                                                      // to reduce the exponent. Offset by 4 for when remainder is 0
  if (base != 0 && next == 0) next = 100;

  // Add it as the last item in the list
  arr.push_back(next);

  // Recursively deal with the next 2 items in the list
  return last_digit(arr);
}
