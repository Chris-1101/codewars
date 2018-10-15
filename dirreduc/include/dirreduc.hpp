#ifndef DIRREDUC_H
#define DIRREDUC_H

#include <array>

class DirReduction
{
  typedef std::array<int, 2> Coord;

  public:
  static std::vector<std::string> dirReduc(std::vector<std::string> &arr);
};

#endif
