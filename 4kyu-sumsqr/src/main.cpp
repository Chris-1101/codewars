#include <iostream>

#include "unittest.hpp"
#include "sumsqr.hpp"
using namespace std;

int main(void)
{
  cout << "\n";

  cout << "SumSquares::sum_of_squares(15)" << "\n";
  cout << "------------------------------" << "\n";
  unit_test<int, int>(SumSquares::sum_of_squares(15), 4);

  cout << "SumSquares::sum_of_squares(16)" << "\n";
  cout << "------------------------------" << "\n";
  unit_test<int, int>(SumSquares::sum_of_squares(16), 1);

  cout << "SumSquares::sum_of_squares(17)" << "\n";
  cout << "------------------------------" << "\n";
  unit_test<int, int>(SumSquares::sum_of_squares(17), 2);

  cout << "SumSquares::sum_of_squares(18)" << "\n";
  cout << "------------------------------" << "\n";
  unit_test<int, int>(SumSquares::sum_of_squares(18), 2);

  cout << "SumSquares::sum_of_squares(19)" << "\n";
  cout << "------------------------------" << "\n";
  unit_test<int, int>(SumSquares::sum_of_squares(19), 3);

  return 0;
}
