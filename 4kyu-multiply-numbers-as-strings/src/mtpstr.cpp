#include <string>
#include <vector>

#include "mtpstr.hpp"

std::string multiply(std::string num1, std::string num2)
{
  size_t len_num1 = num1.length(), len_num2 = num2.length();
  size_t len_total = len_num1 + len_num2;

  std::vector<int> tmp(len_total, 0);
  std::string result(len_total, '0');

  for (unsigned i = len_num1, max_i = len_num1 - 1; i--;)
  {
    for (unsigned j = len_num2, max_j = len_num2 - 1; j--;)
    {
      tmp[max_i - i + max_j - j] += (num1[i] - '0') * (num2[j] - '0');
    }
  }
  for(unsigned i = 0; i < len_total - 1; i++)
  {
    tmp[i + 1] += tmp[i] / 10;
    result[len_total - 1 - i] = tmp[i] % 10 + '0';
    result[0] = tmp[len_total - 1] % 10 + '0';
  }
  return result.erase(0, std::min(result.find_first_not_of('0'), result.length() - 1));
}
