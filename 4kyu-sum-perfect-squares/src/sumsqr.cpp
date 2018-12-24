#include <cmath>
#include <vector>
#include <limits>
#include <algorithm>

#include "sumsqr.hpp"

int SumSquares::sum_of_squares(int n)
{
  int offset = 0;
  int smallest = std::numeric_limits<int>::max();

  do // NOTE: There _has_ to be a more efficient way of doing this...
  {
    std::vector<int> res = {};
    int num = n;

    while (num > 0)
    {
      int closest_root = (num == n) ? sqrt(num) - offset : sqrt(num);
      int closest_square = closest_root * closest_root;
      res.push_back(closest_square);
      num -= closest_square;
    }
    smallest = std::min(smallest, (int)res.size());
  }
  while (++offset < (int)sqrt(n));

  return smallest;
}
