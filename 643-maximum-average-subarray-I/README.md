# 643: Maximum Average Subarray I
Given an integer array `nums` consisting of `n` elements, and an integer
`k`, find a contiguous subarray of `nums` of length `k` that has the
maximum average value, and return this value.

Since we are looking for a contiguous subarray, and we only need to
return the average in this subarray, we don't even need to store a
subarray; the only thing we need is to perform a LIFO-like operation on
the returned sum.

Create a `sum` variable and set it equal to the sum of the first `k`
elements. Then, we iterate through the rest of the elements. For each
element, we will subtract the previous sum by the last element in the
subarray, and add the new element to the subarray. If this `new_sum` is
greater than `sum`, then we update `sum` with `new_sum`.

Doing this allows us to find the greatest sum of `k` contiguous elements
in `nums`, which corresponds to the `k` elements of the maximum average
subarray within `nums`.

The time complexity is `O(n)`, and the space complexity is `O(1)`.
