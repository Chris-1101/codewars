#include <string>
#include <sstream>
#include <algorithm>
#include <cmath>

#include "revrot.hpp"

std::string RevRot::revRot(const std::string &str, unsigned int sz)
{
  // Sanity checks
  if (sz <= 0 || str.empty())
  {
    return "";
  }
  else
  {
    std::stringstream res;

    // Break string into chunks
    for (unsigned i = 0; i < str.length(); i += sz)
    {
      if (i + sz > str.length())
      {
        break; // whenever string cannot supply enough digits
      }
      else
      {
        // Start work on the current chunk
        std::string sub = str.substr(i, sz);
        int sum = 0;

        for (auto c : sub)    // For each character in the chunk
        {
          int n = c - '0';    // Convert character to numerical equivalent
          sum += pow(n, 3);   // Sum its cubes
        }

        if (sum % 2 == 0)     // Reverse if `sum` is even
        {
          std::reverse(sub.begin(), sub.end());
          res << sub;
        }
        else                  // Rotate one character if not
        {
          res << sub.substr(1) + sub[0];
        }
      }
    }

    // Return final result
    return res.str();
  }
}
