# 700: Search in a Binary Search Tree

You are given the `root` of a binary search tree (BST) and an integer `val`.

Find the node in the BST that the node's value equals `val` and return the subtree rooted with that node. If such a node does not exist, return NULL.

This is probably one of the easiest questions on Leetcode, and it boils down to whether you understand the definition of a binary search tree.

In a binary search tree:
    - The left subtree consists of nodes with a value less than the current node's value.
    - The right subtree consists of nodes with a value greater than the current node's value.
    - Every node's value is unique.

So, to conduct a binary search in a binary search tree, you would compare the target value with the current node's value. You return that node if you have found the value, and you move to the left or right child if the current node's value is greater than or less than the target value respectively.

The best case time complexity is `O(log(n))`, with a worse case time complexity of `O(n)` if the tree is skewered. The space complexity is `O(1)`, since we need to store a pointer to the current node on the stack.
