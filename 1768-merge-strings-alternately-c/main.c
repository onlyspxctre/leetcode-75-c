#include "solution.h"
#include <stdio.h>

int main(void) {
    printf("%s\n", mergeAlternately("abc", "pqr"));
    printf("%s\n", mergeAlternately("ab", "pqrs"));
    printf("%s\n", mergeAlternately("abcd", "pq"));
}
