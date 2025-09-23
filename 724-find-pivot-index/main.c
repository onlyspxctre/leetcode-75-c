#include "solution.h"
#include <stdio.h>

int main(void) {
    printf("%d\n", pivotIndex((int[]) {1, 7, 3, 6, 5, 6}, 6));     // 3
    printf("%d\n", pivotIndex((int[]) {1, 2, 3}, 3));              // -1
    printf("%d\n", pivotIndex((int[]) {2, 1, -1}, 3));             // 0
    printf("%d\n", pivotIndex((int[]) {0, 0}, 2));                 // 0
    printf("%d\n", pivotIndex((int[]) {-1, -1, -1, -1, 0, 1}, 6)); // 1
    printf("%d\n", pivotIndex((int[]) {-1, -1, -1, 0, 1, 1}, 6));  // 0
}
