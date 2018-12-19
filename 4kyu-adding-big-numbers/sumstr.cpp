#include <iomanip>
#include <sstream>
#include <string>
#include <algorithm>

std::string pad(const std::string& str, int amount)
{
  std::stringstream ss;
  ss << std::setfill('0') << std::setw(amount) << str;
  return ss.str();
}

std::string trimLeading(const char& c, std::string& str)
{
  return str.erase(0, std::min(str.find_first_not_of(c), str.size() - 1));
}

std::string add(std::string num1, std::string num2)
{
  unsigned short max_len = std::max(num1.length(), num2.length());
  num1 = pad(num1, max_len);
  num2 = pad(num2, max_len);

  std::reverse(num1.begin(), num1.end());
  std::reverse(num2.begin(), num2.end());

  std::stringstream res_total;
  short carry = 0;

  for (unsigned short i = 0; i < max_len; ++i)
  {
    short res_current = (num1[i] - '0') + (num2[i] - '0') + carry;
    res_total << res_current % 10;
    carry = res_current / 10;
  }
  res_total << carry;

  std::string result = res_total.str();
  std::reverse(result.begin(), result.end());

  return trimLeading('0', result);
}
