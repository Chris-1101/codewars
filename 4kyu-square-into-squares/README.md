# Square into Squares

> Given a positive integral number `n`, return the decomposition of N = n² as a **strictly increasing** sequence of numbers, so that the sum of the squares is equal to n². If there are multiple solutions (and there will be), return the result with the **largest possible values**.
>
> * For instance, `Decomp::decompose(11)` could return `{ 2, 6, 9 }`, but it should return `{ 1, 2, 4, 10 }` since that's the solution with the largest value (10).
> * Likewise, `Decomp::decompose(50)` could return `{ 1, 1, 4, 9, 49 }`, but such a sequence is not strictly increasing. The result should instead be `{ 1, 3, 5, 8, 49 }`.
>
> **Notes**
> * Neither `{ n }` nor `{ 1, 1, ..., 1 }` are valid solutions
> * If no valid soltion exists, return `null`
> * Hint: very often, the last item in the sequence will be `n - 1`

[Kata](https://www.codewars.com/kata/54eb33e5bc1a25440d000891) by [g964](https://www.codewars.com/users/g964) @ [CodeWars](https://www.codewars.com)
