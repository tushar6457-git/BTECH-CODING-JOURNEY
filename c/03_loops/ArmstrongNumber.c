#include <stdio.h>

int main() {
    int num, originalNum, remainder, result, n;
    int lower = 1, upper = 1000;

    for(num = lower; num <= upper; num++) {

        originalNum = num;
        result = 0;
        n = 0;

        // Count digits
        while (originalNum != 0) {
            originalNum /= 10;
            n++;
        }

        originalNum = num;

        // Armstrong calculation
        while (originalNum != 0) {
            remainder = originalNum % 10;

            int power = 1;
            for(int i = 0; i < n; i++) {
                power *= remainder;
            }

            result += power;
            originalNum /= 10;
        }

        if (result == num) {
            printf("%d ", num);
        }
    }

    return 0;
}