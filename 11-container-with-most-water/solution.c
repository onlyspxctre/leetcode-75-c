#include "solution.h"
#include <math.h>
#include <stddef.h>

int maxArea(int* height, int height_size) {
    int left = 0, right = height_size - 1;
    int area = 0;

    while (right - left > 0) {
        int new_area = (int) fmin(height[left], height[right]) * (right - left);

        area = new_area > area ? new_area : area;

        if (height[left] > height[right]) {
            right--;
        }
        else {
            left++;
       }
    }

    return area;
}
