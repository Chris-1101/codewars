#include <array>
#include <vector>
#include <map>

#include "dirreduc.hpp"

std::vector<std::string> DirReduction::dirReduc(std::vector<std::string> &arr)
{
  if (arr.size() <= 1) return arr;

  std::vector<std::string> res = arr;
  std::map<std::string, Coord> coords {
    { "NORTH", {  0,  1 } },
    { "SOUTH", {  0, -1 } },
    { "WEST" , { -1,  0 } },
    { "EAST" , {  1,  0 } }
  };

  unsigned short x = 0;
  unsigned short y = 1;

  for (unsigned i = 1; i < res.size(); ++i)
  {
    std::string pos1 = res[i - 1];
    std::string pos2 = res[i];

    bool north_south = coords[pos1][x] == coords[pos2][x] && coords[pos1][y] != coords[pos2][y];
    bool west_east = coords[pos1][y] == coords[pos2][y] && coords[pos1][x] != coords[pos2][x];
    bool is_opposite_directions = north_south || west_east;

    if (is_opposite_directions)
    {
      res.erase(res.begin() + (i - 1), res.begin() + (i + 1));
      i = 0;
    }
  }

  // Reduce direction to sum of coordinates
  // short sum_x = 0;
  // short sum_y = 0;

  // for (auto dir : arr)
  // {
  //   sum_x += coords[dir][0];
  //   sum_y += coords[dir][1];
  // }

  // Extract reduced directions from sums
  // NOTE: this assumes only one direction remains at the end
  // As per test cases... If not, wrap each in for loop
  // if (sum_y > 0)
  // {
  //   res.push_back("NORTH");
  // }
  // else if (sum_y < 0)
  // {
  //   res.push_back("SOUTH");
  // }

  // if (sum_x < 0)
  // {
  //   res.push_back("WEST");
  // }
  // else if (sum_x > 0)
  // {
  //   res.push_back("EAST");
  // }

  return res;
}
