#ifndef _RANDSTR_HPP
#define _RANDSTR_HPP

#include <string>
#include <algorithm>
#include <iostream>

std::string random_string(size_t length = 20)
{
  auto randchar = []() -> char
  {
    const char charset[] =
      " ,!."
      "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
      "abcdefghijklmnopqrstuvwxyz";

    const size_t max_index = sizeof(charset) - 1;
    return charset[rand() % max_index];
  };

  std::string str(length, 0);
  std::generate_n(str.begin(), length, randchar);

  return str;
}

#endif
