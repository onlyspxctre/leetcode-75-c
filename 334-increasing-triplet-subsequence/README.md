# 334: Increasing Triplet Subsequence

Given an integer array `nums`, return true if there exists a triple of
indices `(i, j, k)` such that `i < j < k` and `nums[i] < nums[j] <
nums[k]`. If no such indices exist, return false.

We take on the challenge of solving this problem in linear time and
constant space.

My original idea that I submitted with yielded a horrible runtime, but I
believe it is still worth covering as it makes understanding the
solution easier.

We create two arrays of size 3, named `triplet` and `deep_triplet`. If
we find a number in `nums` greater than the current element in
`triplet`, we go to the next element and set it equal to that number. If
we find a number that is less than the current element in `triplet` but
greater than the previous element, we just set the current element equal
to that number. However, if we find a number that is less than our first
element in `triplet`, save the state of `triplet` equal to
`deep_triplet` and restart from the first step.

The idea is that we iterate through the array until we find a number
smaller with a starting number less than our current triplet of indices,
which indicates a potential for another triplet of indices. We save our
current set of triplets to `deep_triplet` so that in case we find a
value to complete our original triplet of indices, we can check against
our original triplet of indices and return true.

You may realize now that if we find more and more numbers less than the
current triplet, we will be overwriting `deep_triplet` again and again.
However, we can actually safely discard older triplets. This is because
we only replace our older triplets when we find a triplet that starts
with a smaller number. This means that as long as we fulfill the next
smallest triplet, it doesn't matter whether we fulfill the older, larger
triplets; and in the case we don't fulfill the next smallest triplet, it
would have been impossible to fulfill a larger triplet anyway. In any
case, we could safely discard older triplets and would only need to
check for whether the previous (or next smallest) triplet was completed.

The time complexity for this solution is technically O(n), and the space
complexity is O(1) since we create two arrays of fixed length. However,
this is not the best solution; it is abysmally slow due to the amount of
conditionals, copying of arrays, etcetera.

What we have just uncovered is that it does not actually matter if we
save the previous triplet of indices; the only thing that matters is
that we fulfill the smallest triplet of indices we can find. By
fulfilling the smallest triplet, we can return true. If we can't fulfill
the smallest triplet, then we wouldn't be able to fulfill any larger
triplets.

This means we can effectively omit the second array entirely and just
store the values of our first and second indices. We initiate `first`
and `second` as `INT32_MAX` and literally just iterate through the
array, and if we find a number smaller than the `first` index, than we
just set it equal to that number. Otherwise, we do the same thing for
the `second` index. Otherwise, if the number is smaller than both of our
indices, we have completed the triplet, and thus can return true.

By just iterating through the array and getting the smallest two
numbers, we effectively narrow right down to the smallest possible
triplet of indices. If we continue iterating and find the number greater
than the smallest two indices, then of course we return true!

But what if we set `first` equal to an index after `second`? The indices
would not be in order, right?

Let's consider the array: `[4, 2, 3, 1, 5]`

The winning triplet of indices is `[2, 3, 5]`.

If we set `first` equal to the lowest number it could find, it would be
`1`. However, this will not actually matter. Since we set `second` equal
to the second lowest number that it can find, *but not any values that
have already been traversed or set to `first`*, `second` would have been
set to 3, not 2. If you set `second` always to the lowest value that
hasn't been traversed and set, you will always end up with the second
index of the smallest triplet of indices in a given array. If this array
is able to complete any triplet of indices with the second element of
the smallest triplet of indices in the array, then it is able to fulfill
the winning triplet of indices. Thus, `first` does not matter in this
context.

The time complexity is `O(n)`, and the space complexity is `O(1)`. This
solution seems uncannily simple, yes. Do I feel stupid after writing a
pile of slop? A little bit.
