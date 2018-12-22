#include <iostream>

#include "decomp.hpp"
using namespace std;

int main (void)
{
  vector<long long> res = Decomp::decompose(11);

  for (auto const& num : res)
  {
    cout << num << endl;
  }

  return 0;
}
