#include "solution.h"
#include <stdio.h>

void t_findDuplicate(int* nums, int n, int target) {
    if (findDuplicate(nums, n) == target) {
        printf("\033[0;32mtrue\n");
    } else {
        printf("\033[0;31mfalse\n");
    }
}

int main(void) {
    t_findDuplicate((int[]) {1, 3, 4, 2, 2}, 5, 2);
    t_findDuplicate((int[]) {3, 1, 3, 4, 2}, 5, 3);
    t_findDuplicate((int[]) {3, 3, 3, 3, 3}, 5, 3);
    t_findDuplicate((int[]) {2, 5, 9, 6, 9, 3, 8, 9, 7, 1}, 9, 9);
}
