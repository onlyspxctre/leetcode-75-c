# 328: Odd Even Linked List

Given the `head` of a singly linked list, group all the nodes with odd
indices together followed by the nodes with even indices, and return the
reordered list.

The first node is considered odd, and the second node is even, and so
on.

We will use two pointers to solve this problem, an `odd` pointer
iterating through odd indices, and an `even` pointer iterating through
even indices.

We will also need a `const` pointer to the even head, so that when our
`odd` reaches the end we can link the tail of `odd` to the head of
`even`.

What we are doing is we are leveraging the fact that an odd element will
**always** point to an even element, and vice versa. We can set
`odd->next` equal to `even->next`, move `odd`, then set `even` to
`odd->next`, and then repeat.

So we will iterate through the linked list with a `while` loop on the
condition that `odd` is NOT null. We will set the `odd` to `even->next`
and check if it exists. If it doesn't, we break. We will do the same
thing with `even` to `odd->next`.

When we break out of this `while` loop, it means that all `odd` elements
will be linked together, and all `even` elements will be linked
together. Finally, we will set the tail of the odd linked list that
`odd` is pointing to, and set `odd->next` to point to the head of the
`even`.

The time complexity is `O(n)`, and the space complexity is `O(1)`.
