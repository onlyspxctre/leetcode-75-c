#include "solution.h"

int largestAltitude(int* gain, int gain_size) {
    int highest = 0;


    int curr = 0;
    for (int i = 0; i < gain_size; i++) {
        curr += gain[i];

        if (curr > highest) highest = curr;
    }

    return highest;
}
