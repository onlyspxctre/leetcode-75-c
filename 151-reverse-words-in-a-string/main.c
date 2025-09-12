#include "solution.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void t_reverseWords(char* s) {
    char *str = malloc(strlen(s) + 1);
    strcpy(str, s);
    reverseWords(str);
    printf("%s\n", str);
}

int main(void) {
    t_reverseWords("the sky is blue"); // blue is sky the
    t_reverseWords("  hello world  "); // world hello
    t_reverseWords("a good     example"); // example good a
    t_reverseWords("I love big booty asian girls named Dreamy"); // Dreamy named girls asian booty big love I
    t_reverseWords(" asdasd df f");
}
