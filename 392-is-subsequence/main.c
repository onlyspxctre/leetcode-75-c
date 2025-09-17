#include "solution.h"
#include <stdio.h>

void t_isSubsequence(char* s, char* t) {
    int boolean = isSubsequence(s, t);

    printf("%s is subsequence of %s: ", s, t);
    switch (boolean) {
        case true:
            printf("TRUE\n");
            break;
        case false:
            printf("FALSE\n");
            break;
    }
}
int main(void) {
    t_isSubsequence("abc", "ahbgdc");
    t_isSubsequence("axc", "ahbgdc");
}
