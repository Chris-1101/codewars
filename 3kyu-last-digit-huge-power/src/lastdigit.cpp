#include <list>
#include <cmath>
#include <iostream>

#include "lastdigit.hpp"

int last_digit(std::list<int> arr)
{
  if (arr.size() == 0) return 1;
  if (arr.size() == 1) return arr.back() % 10;

  // Why are we using linked lists instead of vectors..?
  std::list<int> power(std::prev(arr.end(), 2), arr.end());
  int base = power.front(), exponent = power.back(), next;
  arr.pop_back(); arr.pop_back();

  if (exponent > 1) // replace with switch? + commit first
  {
    next = std::pow(base % 100, exponent % 4 + 4);
  }
  else
  {
    next = (exponent == 0) ? 1 : base;
  }
  arr.push_back(next);

  return last_digit(arr);
}
