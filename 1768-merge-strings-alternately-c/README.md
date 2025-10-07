# 1768: Merge Strings Alternately

Merging two strings in alternating order, appending the rest of the
longer string to the end.

Simply use two indexes on the two words, and when one of the indexes
equal the length of the corresponding word, append the rest of the
characters to the end of the string.

The time complexity is `O(n)`, where `n` is the length of `word1 + word2`.

The space complexity is `O(n)`, where `n` is the length of `word1 + word2`.

