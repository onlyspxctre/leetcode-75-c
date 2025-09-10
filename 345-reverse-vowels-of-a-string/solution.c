#include "solution.h"
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool isVowel(char c) {
    switch (c) {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        return true;
    default:
        return false;
    }
}

void swap_xor(char* a, char* b) {
    if (a == b) return;

    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

char* reverseVowels(char* s) {

    char* str = malloc(strlen(s) + 1);
    strcpy(str, s);

    char* s_lptr = str;
    char* s_rptr = str + strlen(s) - 1;

    while (s_lptr < s_rptr) {
        if (isVowel(*s_lptr)) {
            while (!isVowel(*s_rptr)) {
                s_rptr--;
            }

            swap_xor(s_lptr, s_rptr);
            s_rptr--;
        }
        s_lptr++;
    }

    return str;
}
