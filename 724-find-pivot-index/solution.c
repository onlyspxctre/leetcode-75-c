#include "solution.h"

int pivotIndex(int* nums, int nums_size) {
    int left_sum = 0, right_sum = 0;

    for (int i = 0; i < nums_size; ++i) {
        right_sum += nums[i];
    }

    for (int i = 0; i < nums_size; ++i) {
        right_sum -= nums[i];

        if (left_sum == right_sum) {
            return i;
        }

        left_sum += nums[i];
    }

    return -1;
}
