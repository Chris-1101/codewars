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

  for (unsigned i = 1, x = 0, y = 1; i < res.size(); ++i)
  {
    std::string pos1 = res[i - 1], pos2 = res[i];

    bool north_south = coords[pos1][x] == coords[pos2][x] && coords[pos1][y] != coords[pos2][y];
    bool west_east = coords[pos1][y] == coords[pos2][y] && coords[pos1][x] != coords[pos2][x];
    bool is_opposite_directions = north_south || west_east;

    if (is_opposite_directions)
    {
      res.erase(res.begin() + (i - 1), res.begin() + (i + 1));
      i = 0;
    }
  }

  return res;
}
