# 283: Move Zeroes

Given an integer array `nums`, move all `0`s to the end while
maintaining the relative order of the non-zero elements.

This must be done **in-place**.

This is a relatively easy question, actually.

The naive solution is to iterate through the array, swap any zeroes with
the last element, and then move the displaced integer to the correct
location. This will yield us bad runtime and is a big no-no.

We will use a gigachad solution. We will find the first zero integer and
set a variable `zero_idx` equal to its index. Then, we will iterate
through the array until we find a non-zero integer, and then swap with
the value at `zero_idx`, guaranteed to be a 0. Then, we simply increment
`zero_idx`, and repeat until we reach the end of the array.

Why does `zero_idx` guarantee a zero? Well, if we found `zero_idx` and
iterate to the next element, and it is non-zero, we swap them
immediately and place our zero integer into the next element, and then
we increment `zero_idx`, which now points to the next element where our
zero integer was placed.

If we iterate to the next element and there is a zero integer there,
then when we increment our `zero_idx` there will still be a zero there.

The time complexity is `O(n)`, since we iterate through the array once.
The space complexity is `O(1)`, since we only create one stack variable
`zero_idx`.
