# 345: Reverse Vowels of a String

Given a string `s`, reverse only a vowel in the string and return it.

We just need two helper functions:

`isVowel` is just a switch statement returning true if the input char
`c` is a vowel, or false otherwise.

`swap_xor` swaps the values of two char pointers if they point to
different memory addresses by doing bit manipulation in order to avoid
creating a `temp` variable.

Now onto the code. We first `malloc` a new string `str` that we can
modify and `strcpy` the `s` string into `str`.

For this problem, we will use two pointers. The left pointer will
traverse until it hits a vowel, and then the right pointer will traverse
until it finds a vowel. When both pointers are at a vowel, we swap them.
When the left pointer is no longer to the left of the right pointer,
we're done.

After swapping them, we must make sure we decrement the right pointer by
1. Since the right pointer only decrements when we hit another vowel,
the check for a vowel will occur before the right pointer starts
decrementing, which means that the vowel we just swapped will be swapped
again. We decrement the right pointer by 1 now so that we're not
swapping a vowel that is already in the right place.

The time complexity is `O(n)`, since we traverse the string until the left
pointer is no longer to the left of the right pointer. The space
complexity is `O(n)`, where n is the number of characters in the input
string `s`, because we call `malloc` to create a return string.
