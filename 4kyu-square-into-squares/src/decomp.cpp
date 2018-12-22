#include <cmath>
#include <vector>
#include <algorithm>

#include "decomp.hpp"

std::vector<long long> Decomp::decompose(long long n)
{
  std::vector<long long> res = {};

  long long max = n * n;
  long long num = n - 1;

  while (num > 0)
  {
    res.push_back(num);
    max -= num * num;
    num = sqrt(max);
  }

  std::reverse(res.begin(), res.end());
  return res;
}
