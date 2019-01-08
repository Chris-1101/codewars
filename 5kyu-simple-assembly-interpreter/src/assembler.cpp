#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>
#include <iostream> // debug

#include "assembler.hpp"

static std::vector<std::string> split(std::string const& str)
{
  std::string token;
  std::vector<std::string> result;
  std::istringstream iss(str, std::istringstream::in);

  while (iss >> token) result.push_back(token);

  return result;
}

std::unordered_map<std::string, int> assembler(std::vector<std::string> const& assembly)
{
  std::unordered_map<std::string, int> registers;

  for (unsigned i = 0; i < assembly.size(); i++)
  {
    std::vector<std::string> instruction = split(assembly[i]);

    if (instruction[0] == "mov") registers[instruction[1]] = std::stoi(instruction[2]);
    if (instruction[0] == "inc") registers[instruction[1]]++;
    if (instruction[0] == "dec") registers[instruction[1]]--;
    if (instruction[0] == "jnz" && registers[instruction[1]] != 0) i += (std::stoi(instruction[2]) < 0) ? -1 + std::stoi(instruction[2]) : std::stoi(instruction[2]);
  }
  return registers;
}
