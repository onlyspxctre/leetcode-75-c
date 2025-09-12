#include <stddef.h>
#include <string.h>

void swap_xor(char* a, char* b) {
    if (a == b)
        return;
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void reverse(char* s, short left, short right) {
    while (left < right) {
        swap_xor(&s[left], &s[right]);
        left++;
        right--;
    }
}

char* reverseWords(char* s) {
    size_t n = strlen(s);

    // reverse everything
    reverse(s, 0, (short) n - 1);

    short left = 0, right = 0, k = 0;

    while (s[left] != '\0') {

        if (s[left] == ' ') {
            left++;
            continue;
        }

        right = left;

        while (s[right] != ' ' && s[right] != '\0') {
            right++;
        }

        reverse(s, left, right - 1);

        if (k != 0) {
            s[k++] = ' ';
        }
        for (short i = left; i < right; i++) {
            s[k++] = s[i];
        }

        left = right;

    }
    s[k] = '\0';

    return s;
}
