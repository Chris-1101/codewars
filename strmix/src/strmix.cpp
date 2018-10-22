#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
#include <vector>
#include <map>
#include <algorithm>

#include "strmix.hpp"

// Strings mix main function
std::string Mix::strMix(const std::string &s1, const std::string &s2)
{
  // Count frequency of characters in each string
  std::map<char, int> s1_counts = charFrequency(s1);
  std::map<char, int> s2_counts = charFrequency(s2);

  // Create substrings array
  std::vector<std::string> results;
  std::string range = "abcdefghijklmnopqrstuvwxyz";

  for (auto &c : range)
  {
    std::map<char, int>::iterator i_s1 = s1_counts.find(c);
    std::map<char, int>::iterator i_s2 = s2_counts.find(c);

    size_t s1_count = (islower(i_s1->first)) ? i_s1->second : 0;
    size_t s2_count = (islower(i_s2->first)) ? i_s2->second : 0;

    if (s1_count > s2_count)
    {
      if (s1_count > 1)
        results.push_back("1:" + std::string(s1_count, c));
    }
    else if (s1_count < s2_count)
    {
      if (s2_count > 1)
        results.push_back("2:" + std::string(s2_count, c));
    }
    else
    {
      if (s1_count > 1)
        results.push_back("=:" + std::string(s1_count, c));
    }
  }

  // Sort substring array by length lexicographically
  std::sort(results.begin(), results.end(), [](const std::string &s1, const std::string &s2) -> bool
  {
    return (s1.length() == s2.length()) ? s1 < s2 : s1.length() > s2.length();
  });

  // Assemble final string
  const char *separator = "";
  std::stringstream ss;

  for (auto &result : results)
  {
    ss << separator << result;
    separator = "/";
  }

  // Return result
  return ss.str();
}

// Count frequency of characters in a given string
std::map<char, int> Mix::charFrequency(const std::string &str)
{
  std::map<char, int> count;

  for (auto &c : str)
  {
    if (islower(c))
      count[c]++;
  }
  return count;
}
