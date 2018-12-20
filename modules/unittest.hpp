#ifndef UNITTEST_HPP
#define UNITTEST_HPP

#include <iostream>

template <typename T1, typename T2>
void unit_test(T1 actual, T2 expected)
{
  std::string red = "\033[1;31m";
  std::string green = "\033[1;32m";
  std::string reset = "\033[0m";

  std::string status = (actual == expected) ? green + "✔ passed" + reset : red + "✘ failed" + reset;

  std::cout << "Status   : " << status << "\n";
  std::cout << "Result   : " << actual << "\n";
  std::cout << "Expected : " << expected << "\n";
  std::cout << std::endl;
}

#endif
