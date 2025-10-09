#include "solution.h"

int findDuplicate(int* nums, int n) {
    int tortoise = nums[nums[0]];
    int hare = nums[nums[nums[0]]];

    while (tortoise != hare) {
        tortoise = nums[tortoise];
        hare = nums[nums[hare]];
    }

    hare = nums[0];

    while (tortoise != hare) {
        tortoise = nums[tortoise];
        hare = nums[hare];
    }

    return tortoise;
}
