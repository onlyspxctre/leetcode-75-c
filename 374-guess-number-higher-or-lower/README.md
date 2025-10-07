# 374: Guess Number Higher or Lower

We are playing the Guess Game. The game is as follows:

I pick a number from `1` to `n`. You have to guess which number I picked
(the number I picked stays the same throughout the game).

Every time you guess wrong, I will tell you whether the number I picked
is higher or lower than your guess.

You call a pre-defined API `int guess(int num)`, which returns three
possible results:

`-1`: Your guess is higher than the number I picked (i.e. `num > pick`).
`1`: Your guess is lower than the number I picked (i.e. `num < pick`).
`0`: your guess is equal to the number I picked (i.e. `num == pick`).
Return the number that I picked.

This is a classic example of when to use binary search.

We will have a `left` bound and a `right` bound (we are repurposing the
`n` variable to save 4 bytes, skill issue). Then, our guess `curr` will
be the number in the middle of `left` and `right`.

If our guess is lower, we will set the `left` bound to `curr + 1`, as
the number cannot possibly be this number or below it.

If our guess is higher, we will set the `right` bound (`n`) to `curr -
1`, as the number cannot possibly be this number or above it.

The time complexity is `O(log(n))`, and the space complexity is `O(1)`.
