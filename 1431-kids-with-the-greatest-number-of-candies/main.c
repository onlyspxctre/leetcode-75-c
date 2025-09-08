#include "solution.h"
#include <stdio.h>
#include <stdlib.h>

void t_kidsWithCandies(int* candies, size_t candiesSize, int extraCandies) {
    printf("[ ");
    bool* table = kidsWithCandies(candies, (int) candiesSize, extraCandies, NULL);

    for (size_t i = 0; i < candiesSize; i++) {
        printf("%s ", table[i] == true ? "true" : "false");
    }
    printf("]\n");

    free(table);
}
int main(void) {
    t_kidsWithCandies((int[]) {2, 3, 5, 1, 3}, 5, 3);
    t_kidsWithCandies((int[]) {4, 2, 1, 1, 2}, 5, 1);
    t_kidsWithCandies((int[]) {12, 1, 12}, 3, 10);
}
