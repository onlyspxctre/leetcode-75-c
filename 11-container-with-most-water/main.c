#include "solution.h"
#include <stdio.h>

int main(void) {
    printf("%d\n", maxArea((int[]) {1, 8, 6, 2, 5, 4, 8, 3, 7}, 9));
    printf("%d\n", maxArea((int[]) {1, 1}, 2));
    printf("%d\n", maxArea((int[]) {2, 3, 4, 5, 18, 17, 6}, 7));
}
