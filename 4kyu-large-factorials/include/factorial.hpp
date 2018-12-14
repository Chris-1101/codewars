#ifndef FACTORIAL_HPP
#define FACTORIAL_HPP

#include <string>

std::string trimLeading(const char& c, std::string& str);
std::string pad(const std::string& str, int amount);
std::string add(std::string& num1, std::string& num2);
std::string multiply(std::string num1, std::string num2);
std::string factorial(int n);

#endif
