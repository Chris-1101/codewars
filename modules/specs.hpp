#ifndef _SPECS_HPP
#define _SPECS_HPP

#include <vector>
#include <sstream>
#include <iostream>

template <typename T> class Specs
{
  public:
    struct assertion_t
    {
      T actual;
      T expected;
    };

    // Add a new test to the array
    void create(T actual, T expected)
    {
      assertion_t assertion = { actual, expected };
      this->assertions.push_back(assertion);
    }

    // Run tests
    void run(void)
    {
      const std::string red = "\033[1;31m", green = "\033[1;32m", reset = "\033[0m";
      const std::string marker = "∙";
      std::ostringstream ss;

      for (auto const& test : this->assertions)
      {
        const bool is_success = test.actual == test.expected;
        const std::string colour = (is_success) ? green : red;

        if (!is_success)
        {
          std::cout << red << "✘ expected: " << test.expected << ", received: " << test.actual << reset << std::endl;
        }
        ss << colour << marker << reset;
      }
      std::cout << ss.str() << std::endl;
    }

  private:
    std::vector<assertion_t> assertions;
};

#endif
