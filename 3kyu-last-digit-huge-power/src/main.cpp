#include <cmath>
#include <cassert>

#include "lastdigit.hpp"
#include "unittest.hpp"
using namespace std;

// Compiled using
// g++ src/main.cpp src/findlast.cpp -o bin/main -Wall -iquote include/ -iquote ../unit-test/ -g

int main(void)
{
  // Fringe Tests
  unit_test<int, int>(last_digit({    }), 1);
  unit_test<int, int>(last_digit({0, 0}), 1);

  // Unit Tests
  unit_test<int, int>(last_digit({ 0,  0,  0}), 0);
  unit_test<int, int>(last_digit({ 1,  2    }), 1);
  unit_test<int, int>(last_digit({ 3,  4,  5}), 1);
  unit_test<int, int>(last_digit({ 4,  3,  6}), 4);
  unit_test<int, int>(last_digit({ 7,  6, 21}), 1);
  unit_test<int, int>(last_digit({12, 30, 21}), 6);
  unit_test<int, int>(last_digit({2, 2, 2, 0}), 4);

  // Large Tests
  unit_test<int, int>(last_digit({937640, 767456, 981242}), 0);
  unit_test<int, int>(last_digit({123232, 694022, 140249}), 6);
  unit_test<int, int>(last_digit({499942, 898102, 846073}), 6);

  // Random Tests
  int rand1 = rand() % 100, rand2 = rand() % 10;
  unit_test<int, int>(last_digit({rand1}), rand1 % 10);
  unit_test<int, int>(last_digit({rand1, rand2}), (int)pow(rand1 % 10, rand2) % 10);

  // Submission Tests
  unit_test<int, int>(last_digit({  3,  3,  1 }), 7);
  unit_test<int, int>(last_digit({  3,  3,  2 }), 3);
  unit_test<int, int>(last_digit({  3,  5,  3 }), 3);
  unit_test<int, int>(last_digit({  3,  4,  5 }), 1);
  unit_test<int, int>(last_digit({  4,  3,  6 }), 4);
  unit_test<int, int>(last_digit({  7,  6,  1 }), 9);
  unit_test<int, int>(last_digit({  7,  6,  2 }), 1);
  unit_test<int, int>(last_digit({  7,  6, 21 }), 1);
  unit_test<int, int>(last_digit({ 12, 30, 21 }), 6);
  unit_test<int, int>(last_digit({  2,  0,  1 }), 1);

  // Submission Tests +
  unit_test<int, int>(last_digit({ 930887, 747793, 760492, 202362 }), 7);
  unit_test<int, int>(last_digit({ 1, 1, 0, 1 }), 1);
  unit_test<int, int>(last_digit({ 2, 0, 1, 0 }), 1);

  // Currently Failing...
  unit_test<int, int>(last_digit({2, 2, 101, 2}), 6);

  return 0;
}
