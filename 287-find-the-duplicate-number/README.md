# 287: Find the Duplicate Number

> [!NOTE]
> This is a bonus question. This is not included on the Leetcode 75 study track.

Given an array of integers nums containing `n + 1` integers where each integer is in the range `[1, n]` inclusive. There is only one repeated number in `nums`, return this repeated number.

You must solve the problem without modifying the array `nums` and using only constant extra space.


I was inspired to complete this problem from [this popular video](https://www.youtube.com/watch?v=pKO9UjSeLew). The way you solve this problem is by using [Floyd's Tortoise and Hare Algorithm](https://medium.com/@simrangarg0501/finding-the-duplicate-number-using-floyds-tortoise-and-hare-algorithm-618ced80e98e).

Since the range of the array is `[1, n]` and the length of the array is `n + 1`, every value of the array is a valid index of `nums`. We can interpret this array as a circular linked list with a loop.

Consider the array `a = [3, 1, 3, 4, 2]`. If we interpret this array as a linked list where each element points to the element indexed by the value of the current element. For example, `a[1] = 3` and so `3 -> a[3] = 4`:

![Linked list](./assets/linked_list.drawio.svg)

We notice that the start node of the loop is our duplicate number `3`, which we can find by using Floyd's Algorithm.
The time complexity is `O(n)`, and the space complexity is `O(1)`.
