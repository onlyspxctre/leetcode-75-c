# 2130: Maximum Twin Sum of a Linked List
In a linked list of size `n`, where `n` is **even**, the `i`th node
**(0-indexed)** of the linked list is known as the twin of the
`(n-1-i)`th node, if `0 <= i <= (n / 2) - 1`.

The **twim sum** is defined as the sum of a node and its twin. Given the
`head` of a linked list with even length, return the **maximum twin
sum** of the linked list.

The naive way to complete this would be to traverse the linked list
multiple times until we reach the twin of the current node, but that
would yield an `O(n^2)` time complexity, which is less than ideal.

And since this list is singly-linked, we have no way of accessing the
previous node if we have already traversed to the next...

However, we can avoid traversing multiple times or having to find a way
to traverse backwards through the linked list. We do this by partially
reversing the linked list.

We will be using concepts from two other problems we have done, so
please be sure to check out [#206](../206-reverse-linked-list/README.md) and [#2095](../2095-delete-the-middle-node-of-a-linked-list/README.md) for their respective
implementations in detail.

We will first find the midpoint of the linked list by using a `fast` and
`slow` pointer (#2095). By iterating the `fast` pointer starting at a
head-start and moving twice as fast as the `slow` pointer, the `while`
loop ends when the `fast` pointer reaches the end, whilst `slow->next`
points to the midpoint node.

From there, we will call the `reverseList()` function (#206) which will
reverse our linked list and return the new head to the reversed list. We
will set `slow` equal to the new head.

You will realize that now `head` and `slow` pointers will point to
corresponding twins. Furthermore, every next node of `head` and `slow`
are corresponding twins up until `slow->next` is NULL.

From here, the solution is clear. We will just iterate until `slow` is
NULL, and adding the vals from `head` and `slow`, capturing the highest
sum into a variable `sum`. At the end of every iteration, we make sure
to move `head` and `slow` to the next node. At the end of the loop, we
can return `sum`.

The time complexity is `O(n)`, since we iterate through the linked list
once to find our midpoint, another time reversing the latter half of our
linked list, and finally when calculating the highest twin sum of the
linked list. The space complexity is `O(1)`.
