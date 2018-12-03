# Multiply Numbers as Strings

Traditionally, a 64-bit wide register can only hold 2^64 different integer values. Depending on whether one of the bits is reserved to store the sign of the value, possible values range between `0` and `18,446,744,073,709,551,615` for unsigned integers, or between `-9,223,372,036,854,775,808` and `9,223,372,036,854,775,807` for signed integers.

If larger numbers are required (floating point notations aside), it's up to the programmer to implement a construct capable of overcoming the limitations of 64-bit memory.

The aim of this challenge is to build such a construct to multiply very large numbers.

> * Arguments will be passed as `std::string`s and may be very large.
> * Arguments will not be negative or contain fractional portions.
> * The solution should be returned as a `std::string`.
> * The solution should not contain leading zeroes: `0123` is invalid.

[Kata](https://www.codewars.com/kata/55911ef14065454c75000062) by [osofem](https://www.codewars.com/users/osofem) @ [CodeWars](https://www.codewars.com)
