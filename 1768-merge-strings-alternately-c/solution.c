#include "solution.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *mergeAlternately(char *word1, char *word2) {
  const size_t word1_len = strlen(word1);
  const size_t word2_len = strlen(word2);
  const size_t sizeof_ret = word1_len + word2_len;

  char *ret = malloc(sizeof_ret + 1);
  int flop = 0;

  size_t idx_word1 = 0, idx_word2 = 0;
  while (idx_word1 < word1_len || idx_word2 < word2_len) {
    if (idx_word1 == word1_len) {
      ret[idx_word1 + idx_word2] = word2[idx_word2];
      idx_word2++;
      continue;
    }
    if (idx_word2 == word2_len) {
      ret[idx_word1 + idx_word2] = word1[idx_word1];
      idx_word1++;
      continue;
    }

    switch (flop) {
    case 0:
      ret[idx_word1 + idx_word2] = word1[idx_word1];
      idx_word1++;
      flop = 1;
      break;
    case 1:
      ret[idx_word1 + idx_word2] = word2[idx_word2];
      idx_word2++;
      flop = 0;
      break;
    }
  }
  ret[sizeof_ret] = '\0';

  return ret;
}
