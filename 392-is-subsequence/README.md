# 392: Is Subsequence
Given two strings `s` and `t`, return true if `s` is a subsequence of
`t`.

This is probably the easiest problem on this website. Just iterate
through `t` while comparing every character to `s`. If they are equal,
check off that character in `s` and move to the next character. If
`s_idx` ever equals `s_len`, then it is true. Otherwise, return false.

For edge cases, if the length of both strings is 0, return true.

The time complexity is `O(n)`. The space complexity is `O(1)`.
