#include "specs.hpp"
#include "sumsqr.hpp"
using namespace std;

int main(void)
{
  Specs<int> tests;

  tests.create(SumSquares::sum_of_squares(15), 4);
  tests.create(SumSquares::sum_of_squares(16), 1);
  tests.create(SumSquares::sum_of_squares(17), 2);
  tests.create(SumSquares::sum_of_squares(18), 2);
  tests.create(SumSquares::sum_of_squares(19), 3);

  tests.run();
  return 0;
}
