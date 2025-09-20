#include "solution.h"
#include <stdio.h>

int main(void) {
    printf("%d\n", largestAltitude((int[]) {-5, 1, 5, 0, -7}, 5)); // 1

    printf("%d\n", largestAltitude((int[]) {-4, -3, -2, -1, 4, 3, 2}, 7)); // 0
}
