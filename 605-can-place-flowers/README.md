# 605: Can Place Flowers

Given an integer array `flowerbed` containing `0`s and `1s`, and an
integer `n`, return true if `n` new flowers can be planted without any
adjacent flowers, and false if otherwise.

Since we cannot have adjacent flower pots, the number of flower pots
that can be placed is limited to `flowerbedSize / 2 + 1`. If `n` is
greater than this value, we return false immediately.

We then iterate through `flowerbed`, with every iteration we are setting
two `int` pointers `prev` and `next`, each pointing to the previous and
next element respectively. If the index of the previous or next element
would be out of bounds, we set the pointer to NULL.

We then check whether our `prev` and `next` are NULL or empty, and we
also check if our current pot is empty. If all of these conditions are
met, we can plant in the current pot, so we decrement `n` by 1. Since
this pot has already been "planted" in, the next pot is automatically
invalid, so we skip over it entirely by incrementing `i`.

Finally, we return true if `n <= 0`, which means that there were enough
empty spots in the flowerbed to plant all the flowers.

The time complexity is `O(n)`. The space complexity is `O(1)` since we are
not allocating an array; we only need to allocate for two `int`
pointers.
