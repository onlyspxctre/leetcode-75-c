# 1071: Greatest Common Divisor of Strings

Given two strings `str1` and `str2`, return the largest string `x` such
that `x` divides both `str1` and `str2`.

We use a mathematical approach. We first make sure `str1` is always the
longer string, and then we `strcpy` the `str2` into our `ret` char
pointer.

The first `while` loop will decrease the length of the string until it
is a multiple of both `str1` and `str2`. Then, we will iterate through
`str1` and `str2` and compare each character.

We complete our iteration in "passes": we will use the first pass to
modify our match target stored in `ret`. If we reach a character in the
string that we do not find our match target, we will shorten our match
target by one character and then attempt again. Once the first pass
ends, we have the smallest match target that the string is divisible by.

Subsequent passes are used to validate the rest of the string. If there
are ANY discrepancies here, we will immediately return an empty string.
Since our match target is already the smallest divisible string of the
base, any discrepancies will immediately result in the string being
indivisible by our match target.

The second iteration is the same as above, but now for `str2`.

Finally, we `realloc` the `ret` pointer to `len + 1` and then append the
null-terminator.

The time complexity is `O(m + n)`, where m is the length of `str1` and n
is the length of `str2`.

The worst case space complexity is `O(n)`, where n is the length of
`str2`. We guarantee that `str2` is shorter than `str1`.

> [!DISCLAIMER] This solution is quite sloppy in my opinion. I may come back
> to this solution and revise it at a later date.
