#include <list>
#include <cmath>

#include "lastdigit.hpp"

int last_digit(std::list<int> arr) {
  long result = 1;

  for (auto i = arr.rbegin(); i != arr.rend(); i++)
  {
    int base = (*i < 20) ? *i : *i % 20 + 20;
    int exponent = (result < 4) ? result : result % 4 + 4;

    result = std::pow(base,exponent);
  }
  return result % 10;
}
