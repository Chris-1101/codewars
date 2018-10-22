#ifndef STRMIX_HPP
#define STRMIX_HPP

#include <map>

class Mix
{
  public:
  static std::string strMix(const std::string &s1, const std::string &s2);

  private:
  static std::map<char, int> charFrequency(const std::string &str);
};

#endif
