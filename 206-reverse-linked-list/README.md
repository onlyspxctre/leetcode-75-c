# 206: Reverse Linked List

Given the `head` of a singly linked list, reverse the list, and return
the `reversed list`.

We will avoid recursion for linked lists.

We first check if head is null, and if it is, we just return it.

We then create a `ListNode` pointer `curr` set to `head->next`
(effectively capturing it), then check if `curr` is null, returning head
if that is null.

We then set `head->next` to null, because the `head` will be the last
item in our reversed linked list.

And now we are set up for our iteration. This is the simple way we will
do it (beating 100% of runtime and 92% of memory):

1. We will capture the next node (`curr->next`) into a local pointer
`next`.

2. `head` will always point to the node we want as `curr->next`.

3. So we set `curr->next` to `head`.

4. We update `head` so that it points to the next node we want as the
next `curr`'s `curr->next`.

5. We stop if `next` is NULL, indicating we have reached the end of our
original linked list.

6. Otherwise, we set `curr` to `next`, and repeat from Step 1 with the
`curr` as the next element and `head` to the previous `curr` element.

Let's begin.

We do some illegal while loop shit, and for every iteration we will
capture `curr->next` into the pointer `next`, and then set `curr->next`
equal to the element left of it (pointed to by `head`). We then update
`head` to `curr`, because `curr` would be the element that `next->next`
should point to.

If `next` is null, we break here and return `curr`; this means that
`curr` is our final node, which is also our new head.

Otherwise, we set `curr` equal to the `next` and repeat.

The time complexity is `O(n)`, and the space complexity is `O(1)`.
