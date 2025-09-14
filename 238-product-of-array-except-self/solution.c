#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/*
 * Note: The returned array must be malloced, assume caller calls free().
 *
 * Must run in O(n) time, use O(1) space, without using division.
 */

int* productExceptSelf(int* nums, int n, int* return_size) {
    int arr[n];
    *return_size = n;

    int cum_product = 1;
    // cum sum
    for (int i = 0; i < n; i++) {
        arr[i] = nums[i];
        nums[i] = 1; // initialize array with 1s
        if (i == 0)
            continue; // left bound check; there is nothing to multiply for the first element

        cum_product *= arr[i - 1]; // accumulate the product
        nums[i] *= cum_product;                // cumulative product of everything before and including nums[i - 1]
    }

    cum_product = 1; // reset cum_product for second pass
    for (int i = n - 2; i >= 0; i--) {
        cum_product *= arr[i + 1];
        nums[i] *= cum_product; // cumulative product of everything after and including nums[i + 1]
    }

    return nums;
}
