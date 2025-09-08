#include "solution.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool* table = malloc((size_t) candiesSize * sizeof(table));

    if (candies == NULL) {
        return table;
    }
    if (returnSize != NULL) {
        *returnSize = candiesSize;
    }

    int greatest = -1;
    for (size_t i = 0; i < (size_t) candiesSize; i++) {
        if (candies[i] >= greatest) {
            greatest = candies[i];
        }
    }

    for (size_t i = 0; i < (size_t) candiesSize; i++) {
        if (candies[i] + extraCandies >= greatest) {
            table[i] = true;
        } else {
            table[i] = false;
        }
    }

    return table;
}
