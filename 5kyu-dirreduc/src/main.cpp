#include <iostream>
#include <string>
#include <vector>

#include "dirreduc.hpp"
using namespace std;

int main()
{
  vector<string> test = {"NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"};
  vector<string> expected = {"WEST"};
  vector<string> actual = DirReduction::dirReduc(test);

  string red = "\033[1;31m";
  string green = "\033[1;32m";
  string reset = "\033[0m";

  string status = (actual == expected) ? green + "✔ passed" + reset : red + "✘ failed" + reset;

  cout << "Unit Test Status: " << status << endl;

  return 0;
}
