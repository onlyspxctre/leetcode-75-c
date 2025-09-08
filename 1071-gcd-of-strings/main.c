#include "solution.h"
#include <stdio.h>

int main(void) {
  printf("%s\n", gcdOfStrings("ABCABC", "ABC"));
  printf("%s\n", gcdOfStrings("ABABAB", "ABAB"));
  printf("%s\n", gcdOfStrings("LEET", "CODE"));
  printf("%s\n", gcdOfStrings("TAUXXTAUXXTAUXXTAUXXTAUXX",
                              "TAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXXTAUXX"));
  printf(
      "%s\n",
      gcdOfStrings(
          "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZQJXZKMPVYWTBAOHN"
          "RLIEGDSCUFABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ",
          "ABCDEFGHIJKLMNOPQRSTUVWXYZZYXWVUTSRQPONMLKJIHGFEDCBAABCDEFGHIJKLMNOP"
          "QRSTUVWXYZ"));
  printf("%s\n", gcdOfStrings("AAAAAAAAA", "AAACCC"));
  printf("%s\n", gcdOfStrings("EFGABC", "ABC"));
}

