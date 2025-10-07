# 1732: Find the Highest Altitude

There is a biker going on a road trip. The road trip consists of `n + 1`
points at different altitudes. The biker starts his trip on point 0 with
altitude equal 0.

You are given an integer array `gain` of length `n` where `gain[i]` is
the net gain in altitude between points `i` and `i + 1` for all `(0 <= i
< n)`. Return the highest altitude of a point.

This is probably the easiest problem on this website.

Iterate through the array, and add the net gains to a variable `curr`.
If `curr` exceeds a variable `highest`, set `highest` equal to `curr`.

By the end of the iteration, `highest` will be equal to the highest
altitude the biker has traveled to.

The time complexity is `O(n)`. The space complexity is `O(1)`.
