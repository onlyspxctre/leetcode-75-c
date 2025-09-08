#include "solution.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *gcdOfStrings(char *str1, char *str2) {
  const size_t str1len = strlen(str1);
  const size_t str2len = strlen(str2);

  if (str1len < str2len) {
    return gcdOfStrings(str2, str1);
  }

  // guarantees str1 to be greater of length

  size_t len = str2len;
  char *ret = malloc(str2len + 1);
  strcpy(ret, str2);

  while (str1len % len != 0 || str2len % len != 0) {
    len--;
  }

  size_t pass = 0;
  do {
    for (size_t i = 0; i < len; i++) {
      if (*(ret + i) != *(str1 + pass * len + i)) {
        if (pass > 0) {
          len = 0;
          goto terminate;
        }
        if (len > 0)
          len--;
        if (i > 0)
          i--;
        continue;
      }
    }
    pass++;
  } while (pass < str1len / len);

  pass = 0;
  do {
    for (size_t i = 0; i < len; i++) {
      if (*(ret + i) != *(str2 + pass * len + i)) {
        if (pass > 0) {
          len = 0;
          goto terminate;
        }
        if (len > 0)
          len--;
        if (i > 0)
          i--;
        continue;
      }
    }
    pass++;
  } while (pass < str2len / len);

terminate:
  ret = realloc(ret, len + 1);
  ret[len] = '\0';

  return ret;
}
