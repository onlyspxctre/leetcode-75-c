#include "solution.h"

void swap_xor(int* a, int *b) {
    if (a == b) return;

    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
void moveZeroes(int* nums, int nums_size) {
    int zero_idx = -1;
    for (int idx = 0; idx < nums_size; idx++) {

        if (zero_idx == -1) {
            if (nums[idx] != 0) continue;

            zero_idx = idx;
            continue;
        }

        if (nums[idx] != 0) {
            swap_xor(&nums[idx], &nums[zero_idx]);
            zero_idx++;
        }
    }
}
