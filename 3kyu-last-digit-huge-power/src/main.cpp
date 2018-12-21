#include <cmath>

#include "specs.hpp"
#include "lastdigit.hpp"
using namespace std;

int main(void)
{
  Specs<int> tests;

  // Fringe Tests
  tests.create(last_digit({    }), 1);
  tests.create(last_digit({0, 0}), 1);

  // Unit Tests
  tests.create(last_digit({ 0,  0,  0}), 0);
  tests.create(last_digit({ 1,  2    }), 1);
  tests.create(last_digit({ 3,  4,  5}), 1);
  tests.create(last_digit({ 4,  3,  6}), 4);
  tests.create(last_digit({ 7,  6, 21}), 1);
  tests.create(last_digit({12, 30, 21}), 6);
  tests.create(last_digit({2, 2, 2, 0}), 4);

  // Large Tests
  tests.create(last_digit({937640, 767456, 981242}), 0);
  tests.create(last_digit({123232, 694022, 140249}), 6);
  tests.create(last_digit({499942, 898102, 846073}), 6);

  // Random Tests
  int rand1 = rand() % 100, rand2 = rand() % 10;
  tests.create(last_digit({rand1}), rand1 % 10);
  tests.create(last_digit({rand1, rand2}), (int)pow(rand1 % 10, rand2) % 10);

  // Submission Tests
  tests.create(last_digit({  3,  3,  1 }), 7);
  tests.create(last_digit({  3,  3,  2 }), 3);
  tests.create(last_digit({  3,  5,  3 }), 3);
  tests.create(last_digit({  3,  4,  5 }), 1);
  tests.create(last_digit({  4,  3,  6 }), 4);
  tests.create(last_digit({  7,  6,  1 }), 9);
  tests.create(last_digit({  7,  6,  2 }), 1);
  tests.create(last_digit({  7,  6, 21 }), 1);
  tests.create(last_digit({ 12, 30, 21 }), 6);
  tests.create(last_digit({  2,  0,  1 }), 1);

  // Submission Tests +
  tests.create(last_digit({ 930887, 747793, 760492, 202362 }), 7);
  tests.create(last_digit({ 1, 1, 0, 1 }), 1);
  tests.create(last_digit({ 2, 0, 1, 0 }), 1);

  // Currently Failing...
  tests.create(last_digit({2, 2, 101, 2}), 6);

  tests.run();
  return 0;
}
