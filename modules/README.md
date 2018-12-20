# Modules
:memo: Helper modules that I commonly use during the course of codewars / coldegolf challenges.

---
## Specs Module
:white_check_mark: Simple class module for creating unit tests.  
<small>ps: yes, `Specs` goes against singular class naming convention, but `Spec` just looked odd!</small>

### Example Usage
```C++
#include "specs.hpp"
// ...
Specs<std::string> tests;

// tests.create(expected, actual);
tests.create(sum("00", "000"), "0");
tests.create(sum("013", "8"), "21");
tests.create(sum("32", "005"), "37");
tests.create(sum("314", "45"), "359");

tests.run();
```

### Output
> ```
> ✘ expected: 0, received: 000   // appears for every failed test
> ∙∙∙∙                           // one symbol per test, ordered, green if passed, red if failed
> ```

---
## Random String Generator
:pencil2: Genereates a random alphabetical string with spaces and punctuation.

### Usage
```C++
#include "randstr.hpp"
// ...
std::string str = random_string(12);   // length argument optional
std::string str = random_string();     // defaults to 20
```

---
## Simple Unit Test Module
:white_check_mark: Old unit test module for C++. No longer used.

### Usage
```C++
#include "unittest.hpp"
// ...
unit_test<actual_type, expected_type>(actual, expected);
```
