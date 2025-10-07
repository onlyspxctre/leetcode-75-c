# 2095: Delete the Middle Node of A Linked List

Given the `head` of a singly linked list, delete the middle node and
return the `head` of the linked list.

For this problem, we will use two pointers of different speeds. If you
have a `hare` pointer that runs twice as fast as the `tortoise` pointer,
then the `hare` reach the end of the linked list when the `tortoise` is
at the half way point.

In this implementation, we will even give `hare` a headstart by one
step, because we want `tortoise` to be on the node that points to our
middle node, not on the middle node itself.

Let's say we have a linked list: `[ 1, 2, 3, 4, 5, 6, 7 ]`. Our middle
node is `4`. The `hare` pointer starts at `3`, whereas the `tortoise`
starts at `1`.

For **every two steps** `hare` takes, `tortoise` takes one. Thus, when
`hare` is at `7` (taking 4 steps), `tortoise` is at `3` (taking 2
steps). `3` is the node that points to our middle node `4`. We can
immediately set the `next` of `3` equal to the node after our middle
node `4`, which would be `5`. This effectively removes the node `4` from
our list.

The code is self-explanatory and is basically explained by the code
above.

The time complexity is `O(n)`. The space complexity is `O(1)`.
