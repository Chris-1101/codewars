# Last Digit of a Huge Number

:construction: **Unsolved**: test case 2 <sup>2 <sup>101 <sup>2</sup></sup></sup> ≡ 6, `last_digit({ 2, 2, 101, 2 }) == 6;` failing with current algorithm. One test amongst over a hundred to fail. Very frustrating!
> For a given std::list&lt;int&gt; `{ x1, x2, x3, ..., xn }`, compute the last (decimal) digit of `x1 ^ (x2 ^ (x3 ^ (... ^ xn)))`.
> * Assume 0 <sup>0</sup> = 1
> * Treat an empty list as equal to 1
> * Powers grow exponentially: 9 <sup>9 <sup>9</sup></sup> has more than 369 million digits. `last_digit()` must deal with them efficiently.
>
> Example
> ```
> last_digit({ 3, 4, 2 }) == 1
> » 3 ^ (4 ^ 2) = 3 ^ 16 = 43,046,721
> ```

[Kata](https://www.codewars.com/kata/last-digit-of-a-huge-number) by [Bodigrim](https://www.codewars.com/users/Bodigrim) @ [CodeWars](https://www.codewars.com)
