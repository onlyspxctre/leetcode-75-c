#include "solution.h"
#include <stdio.h>
#include <stdint.h>

// void swap_xor(int* a, int* b) {
//     if (a == b)
//         return;
//
//     *a = *a ^ *b;
//     *b = *a ^ *b;
//     *a = *a ^ *b;
// }

bool increasingTripletBad(int* nums, int nums_size) {
    int triplet[3] = {nums[0], -1, -1};
    int deep_triplet[3] = {-1, -1, -1};
    int idx = 0;

    for (int i = 0; i < nums_size; i++) {
        if (deep_triplet[1] != -1 && nums[i] > deep_triplet[1]) {
            printf("TRUE  | \"depth tripwire!\"\n");
            return true;
        }

        if (nums[i] > triplet[idx]) {
            idx++;
            triplet[idx] = nums[i];
        } else if (((idx > 0 && nums[i] > triplet[idx - 1]) || idx == 0) && nums[i] < triplet[idx]) {
            triplet[idx] = nums[i];
        } else if (nums[i] < triplet[0] && (nums[i] < deep_triplet[0] || deep_triplet[0] == -1)) {
            deep_triplet[0] = triplet[0];
            deep_triplet[1] = triplet[1];
            deep_triplet[2] = triplet[2];

            idx = 0;
            triplet[idx] = nums[i];
            triplet[1] = -1;
            triplet[2] = -1;
        }

        if (triplet[0] < triplet[1] && triplet[1] < triplet[2]) {
            printf("TRUE | 0: %d, 1: %d, 2: %d\n", triplet[0], triplet[1], triplet[2]);
            return true;
        }
    }

    printf("FALSE | 0: %d, 1: %d, 2: %d\n", triplet[0], triplet[1], triplet[2]);
    return false;
}

bool increasingTriplet(int* nums, int nums_size) {
    int first = INT32_MAX, second = INT32_MAX;

    for (int i = 0; i < nums_size; i++) {
        if (nums[i] <= first) {
            first = nums[i];
        }
        else if (nums[i] <= second) {
            second = nums[i];
        }
        else {
            printf("TRUE\n");
            return true;
        }
    }

    printf("FALSE\n");
    return false;
}
