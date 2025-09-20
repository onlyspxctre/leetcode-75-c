#include "solution.h"

double findMaxAverage(int* nums, int nums_size, int k) {
    double sum = 0;
    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }

    double new_sum = sum;
    for (int i = k; i < nums_size; i++) {
        new_sum = new_sum - nums[i - k] + nums[i];

        if (new_sum > sum) {
            sum = new_sum;
        }
    }

    return sum / k;
}
