#include "solution.h"
#include <stdio.h>

int main(void) {
    printf("%d\n", canPlaceFlowers((int[]) {1, 0, 0, 0, 1}, 5, 1));
    printf("%d\n", canPlaceFlowers((int[]) {1, 0, 0, 0, 1}, 5, 2));
    printf("%d\n", canPlaceFlowers((int[]) {1, 0, 1, 0, 1, 0, 1}, 7, 1));
    printf("%d\n", canPlaceFlowers((int[]) {0}, 1, 1));
    printf("%d\n", canPlaceFlowers((int[]) {0, 0}, 2, 2));
    printf("%d\n", canPlaceFlowers((int[]) {1, 0, 0, 0, 0, 1}, 6, 2));
}
