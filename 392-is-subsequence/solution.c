#include "solution.h"
#include <stddef.h>
#include <string.h>

bool isSubsequence(char* s, char* t) {
    size_t s_len = strlen(s);
    size_t t_len = strlen(t);

    if (s_len == 0 && t_len == 0) {
        return true;
    }

    size_t s_idx = 0;
    for (size_t t_idx = 0; t_idx < t_len; t_idx++) {
        if (s[s_idx] == t[t_idx]) {
            s_idx++;
        }

        if (s_idx == s_len) return true;
    }

    return false;
}
