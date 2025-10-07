# 724: Find Pivot Index

Given an array of integers `nums`, calculate the **pivot index** of this
array.

The **pivot index** is the index where the sum of all the numbers
**strictly** to the left of the index is equal to the sum of all the
numbers **strictly** to the index's right.

If the index is on the left edge of the array, then the left sum is `0`
because there are no elements to the left. This also applies to the
right edge of the array.

Return the ***leftmost pivot index***. If no such index exists, return
`-1`.

I'll be honest, my initial solution was a bit convoluted. It involved
starting from the middle and adjusting the pivot based on whichever
side's sum was larger.

This may be slightly faster in certain scenarios, but was still worse
case O(2n).

The best and easiest way to solve this problem is just to iterate the
array twice. Use the first iteration to populate the `right_sum` by
adding all values traversed in `nums` to `right_sum`.

We use the second iteration to remove the current index from `right_sum`
(this gets us our **true right sum** to the right of the pivot), which
we compare to the `left_sum`. If they are equal, we return `i`, as we
have found our pivot. Otherwise, we add the value of `nums` at the
current index to `left_sum` to create the **true left sum** for the next
index.

If we have iterated through the array twice and not found a pivot index,
we return `-1`.

The time complexity is `O(2n)`, since we iterate through `nums` twice,
which simplifies to `O(n)` when we focus on the asymptotic growth rate of
the solution. The space complexity is `O(1)`, since we create two sum
variables on the stack.
