#include "solution.h"
#include <stdio.h>

void t_moveZeroes(int* arr, int nums_size) {
    moveZeroes(arr, nums_size);

    printf("[");
    for (int i = 0; i < nums_size; i++) {
        printf(" %d,", arr[i]);
    }
    printf("]\n");
}
int main(void) {
    t_moveZeroes((int[]) {0, 1, 0, 3, 12}, 5);
    t_moveZeroes((int[]) {0}, 1);

    t_moveZeroes((int[]) {1, 0, 3, 0, 5, 0, 7}, 7);
    t_moveZeroes((int[]) {1, 0, 3, 4, 5, 0, 7}, 7);
}
