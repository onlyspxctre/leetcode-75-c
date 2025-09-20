#include "solution.h"
#include <stdio.h>

int main(void) {
    printf("%f\n", findMaxAverage((int[]) {1, 12, -5, -6, 50, 3}, 6, 4));
    printf("%f\n", findMaxAverage((int[]) {5}, 1, 1));
    printf("%f\n", findMaxAverage((int[]) {0, 4, 0, 3, 2}, 5, 1));
    printf("%f\n", findMaxAverage((int[]) {4, 2, 1, 3, 3}, 5, 2));
}
