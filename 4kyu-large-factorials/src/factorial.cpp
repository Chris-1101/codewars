#include <string>
#include <vector>
#include <sstream>
#include <iterator>
#include <algorithm>

#include "factorial.hpp"

std::string factorial(int n)
{
  std::vector<int> result = { 1 };
  int carry = 0;

  for (int i = 1; i <= n; i++)
  {
    for (auto & digit : result)
    {
      int tmp = digit * i + carry;
      digit = tmp % 10;
      carry = tmp / 10;
    }
    while (carry)
    {
      result.push_back(carry % 10);
      carry /= 10;
    }
  }
  std::ostringstream ss;
  std::copy(std::rbegin(result), std::rend(result), std::ostream_iterator<int>(ss, ""));

  return ss.str();
}
