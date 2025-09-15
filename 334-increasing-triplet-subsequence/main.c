#include "solution.h"

int main(void) {
    increasingTriplet((int[]) {2, 1, 5, 0, 4, 6}, 6);       // TRUE
    increasingTriplet((int[]) {3, 2, 1, 7, 6, 2, 4, 5}, 8); // TRUE
    increasingTriplet((int[]) {7, 6, 5, 4, 3, 2, 1}, 7);    // FALSE
    increasingTriplet((int[]) {1, 7, 6, 5, 4, 3, 2}, 7);    // FALSE
    increasingTriplet((int[]) {7, 6, 5, 4, 3, 4, 5}, 7);    // TRUE
    increasingTriplet((int[]) {7, 6, 3, 4, 0, 4, 7}, 7);    // TRUE

    increasingTriplet((int[]) {6, 7, 3, 4, 0, 5, 7}, 7);    // TRUE
    increasingTriplet((int[]) {20, 100, 10, 12, 5, 13}, 6); // TRUE
    increasingTriplet((int[]) {6, 7, 3, 4, 8, 2, 7}, 7);    // TRUE
}
