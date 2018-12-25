#include <string>
#include "getmid.hpp"

std::string Kata::get_middle(std::string input)
{
  unsigned short len_mdl = (input.length() % 2 == 0) ? 2 : 1;
  unsigned short i = (input.length() - 1) / 2;

  return input.substr(i, len_mdl);
}
