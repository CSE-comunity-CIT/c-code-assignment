/**
 * Program to calculate the sum of the first 10 numbers using a for loop.
 */

#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        sum += i;
    }

    printf("The sum of the first 10 numbers is: %d\n", sum);

    return 0;
}