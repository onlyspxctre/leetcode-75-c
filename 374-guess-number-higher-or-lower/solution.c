#include "solution.h"
#include <stdint.h>

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return   -1 if num is higher than the picked number
 *            1 if num is lower than the picked number
 *               otherwise return 0
 */

int guess(int num);

int guessNumber(int n) {
    int left = 0;

    int curr = n;

    int result;
    do {
        result = guess(curr);

        switch (result) {
            case -1: // lower
                n = curr - 1;
                curr = (n - left) / 2;
                break;
            case 0: // yes
                return curr;
            case 1: // higher
                left = curr + 1;
                curr = curr + ((n - left) / 2);
                break;
        }
    } while(result != 0);

    return curr;
}
