#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

#include "assembler.hpp"
using namespace std;

void print_result(vector<string> instructions)
{
  unordered_map<string, int> programme = assembler(instructions);

  for (auto i = programme.begin(); i != programme.end(); ++i)
  {
    cout << i->first << ": " << i->second << endl;
  }
  cout << std::endl;
}

int main(void)
{
  print_result({ "mov a 5", "inc a", "dec a", "dec a", "jnz a -1", "inc a" });
  print_result({ "mov a -10", "mov b a", "inc a", "dec b", "jnz a -2" });
  print_result({ "mov a 1", "mov b 1", "mov c 0", "mov d 26", "jnz c 2", "jnz 1 5", "mov c 7", "inc d", "dec c", "jnz c -2", "mov c a", "inc a", "dec b", "jnz b -2", "mov b c", "dec d", "jnz d -6", "mov c 18", "mov d 11", "inc a", "dec d", "jnz d -2", "dec c", "jnz c -5" });
  print_result({ "mov d 100", "dec d", "mov b d", "jnz b -2", "inc d", "mov a d", "jnz 5 10", "mov c a" });
  print_result({ "mov c 12", "mov b 0", "mov a 200", "dec a", "inc b", "jnz a -2", "dec c", "mov a b", "jnz c -5", "jnz 0 1", "mov c a" });

  return 0;
}
