#include "solution.h"
#include <stdio.h>
#include <stdlib.h>

void t_productExceptSelf(int* nums, int nums_size) {
    int return_size = 0;
    int* ret = productExceptSelf(nums, nums_size, &return_size);

    printf("{");
    for (int i = 0; i < return_size; i++) {
        printf(" %d,", ret[i]);
    }
    puts(" }");
}
int main(void) {
    t_productExceptSelf((int[]) {1, 2, 3, 4}, 4);
    t_productExceptSelf((int[]) {-1,1,0,-3,3}, 5);
}
