# 11: Container With Most Water

You are given an integer array height of length `n`. There are `n`
vertical lines drawn such that the two endpoints of the `i`th line are
`(i, 0)` and `(i, height[i])`.

Find two lines that together with the x-axis form a container, such that
the container contains the most water.

Return the maximum amount of water a container can store.

We can calculate the amount of water is in the container by multiplying
the difference in index between two vertical lines by the height of the
smaller line.

We can use two pointers to find the container with the most water by
starting on opposite ends of the array, and then move the pointer to the
line of lower height (`left++` or `right--`). We do this hoping that we
can replace the line with a taller line, which may generate a greater
water capacity despite the decreasing width of the container.

If the area bound by the `left` and `right` is greater than the current
max, we set the max equal to that area. We stop iterating when the
pointers to the lines are adjacent to each other, and return the max
area.

The time complexity is `O(n)`, and the space complexity is `O(1)`.
