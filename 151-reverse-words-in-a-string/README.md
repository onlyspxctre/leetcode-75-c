# 151: Reverse Words in a String
Given a string `s`, reverse the order of the words, and remove any
leading or trailing whitespace.

A word is defined as a sequence of non-space characters.

CHALLENGE: WE MUST DO THIS IN O(1) SPACE. NO ALLOCATING NEW STRINGS.

While this may seem difficult at first, it is theoretically simple: you
reverse the entire string, which puts characters towards the end at the
front and vice versa. Then, you swap each word individually, and thus
preserve each word block's order but reverses the reversed characters to
produce the correct word.

We write two helper functions:

`swap_xor` allows us to use bitwise manipulation to swap two characters
without needing to allocate space for a `temp` variable.

`reverse` takes in a string and two integers making up a range. It will
reverse the characters of that string within the range.

Now onto the code:

We start by reversing everything.

Then, we iterate through and search for a non-whitespace character (the
start of a word). When we find a word, our left and right index will be
set to the first character of the word.

We then increment the right index until we reach the end of the word,
marked by whitespace. We will reverse everything from the left to right,
exclusive.

Then, we will iterate through this range again with variable `k`
starting at 0, which will also remove any leading whitespace that may
have been included in the input string. `k` is persistent, and thus will
pick up where we left off when we move the swapped word from the swapped
location into the correct position (starting one position after the end
of the previous word).

If this is not the first word copied, we append whitespace to the space
between the previous word and the current word.

Since `k` was iterated from each range to copy words, and incremented
when appending whitespace, `k` will be equal to the length of the new
word when everything is fully swapped. We can set the character of the
string at `k` to a null-terminator to make sure that the string's
trailing whitespace is truncated.

The time complexity is `O(n)`. While we have nested while loops, these
while loops are conditional and almost never run per element. After
reversing a range of characters within the string, we skip until the end
of the range.

The space complexity is `O(1)`. We don't allocate new strings or any data
structure that scales in size along with the input.
