# 238: Product of Array Except Self

Given an integer array `nums`, return an array such that all elements
contain the products of every other element, excluding itself.

The product is guaranteed to fit in a 32-bit integer.

The constraints for this program include O(n) time complexity and no
division operations.

We also tackle the "O(1)" space complexity, however Leetcode mentioned
that the output array doesn't matter; we will consider ONE array as
O(1).

This may seem like a daunting medium-difficulty question, and it stumped
me at first too. The key is to start iterating on the second element of
`nums`, and multiply it to a `cum_product` (pardon the French), or the
cumulative product of every element up to and including `nums[i - 1]`.

After the first pass, we will have the left-hand cumulative products of
every element. We run it through the second pass in the opposite
direction, this time multiplying each element by the cumulative product
of every element after and including `nums[i + 1]`, which will give us
the right-hand cumulative products of every element.

The time complexity is `O(n)`. The space complexity is `O(1)`*; we
technically use a temporary new array to store the original values
(which would make this solution linear time), but Leetcode considers
allocating an "output array" as being sufficient for O(1).

This was quite the achievement: 0ms runtime with 100% beat, and 29.2MB
memory with 99.91% beat. I am quite proud of this one.
