#include <string>
#include <algorithm>

#include "sumstr.hpp"

std::string add(std::string num1, std::string num2)
{
  const size_t max_len = std::max(num1.length(), num2.length());

  num1.insert(0, max_len - num1.length(), '0');
  num2.insert(0, max_len - num2.length(), '0');

  unsigned i = max_len, carry = 0;
  std::string result;

  while (i--)
  {
    unsigned sum = (num1[i] - '0') + (num2[i] - '0') + carry;
    result.push_back(sum % 10 + '0');
    carry = sum / 10;
  }
  result.push_back(carry + '0');

  std::reverse(result.begin(), result.end());
  result.erase(0, std::min(result.find_first_not_of('0'), result.length() - 1));

  return result;
}
