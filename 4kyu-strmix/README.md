# Strings Mix

> Given two strings `s1` and `s2`, we want to visualise how different the two strings are. We will only take into account the lowercase letters `a - z`.
>
> The task is to produce a string in which each lowercase letters of s1 or s2 appears as many times as its maximum if this maximum is strictly greater than 1; these letters will be prefixed by the number of the string where they appear with their maximum value and `:`. If the maximum is in s1 as well as in s2 the prefix is `=:`.
>
> In the result, substrings (a substring is for example `2:nnnnn` or `1:hhh`; it contains the prefix) will be in decreasing order of their length and when they have the same length sorted in ascending lexicographic order (letters and digits - more precisely sorted by codepoint); the different groups will be separated by `/`.
>
> ```
> std::string s1 = "mmmmm m nnnnn y&friend&Paul has heavy hats! &"
> std::string s2 = "my frie n d Joh n has ma n y ma n y frie n ds n&"
> Mix::mix(s1, s2) // --> "1:mmmmmm/=:nnnnnn/1:aaaa/1:hhh/2:yyy/2:dd/2:ff/2:ii/2:rr/=:ee/=:ss"
> ```

[Kata](https://www.codewars.com/kata/5629db57620258aa9d000014) by [g964](https://www.codewars.com/users/g964) @ [CodeWars](https://www.codewars.com)
