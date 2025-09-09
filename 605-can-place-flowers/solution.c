#include "solution.h"
#include <stddef.h>
#include <stdio.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    if (n > flowerbedSize / 2 + 1) {
        return false;
    }

    for (int i = 0; i < flowerbedSize; i++) {
        int* prev = i - 1 >= 0 ? flowerbed + i - 1 : NULL;
        int* next = i + 1 < flowerbedSize ? flowerbed + i + 1 : NULL;

        if ((prev == NULL || !*prev) && (next == NULL || !*next) && !*(flowerbed + i)) {
            n--;
            i++;
        }
    }

    return n <= 0;
}
