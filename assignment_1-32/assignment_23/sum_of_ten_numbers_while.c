/**
 * Write a program in C to calculate the sum of the first 10 numbers using a while loop.
 */

#include <stdio.h>

int main() {
    int sum = 0;
    int i = 1;

    while (i <= 10) {
        sum += i;
        i++;
    }

    printf("The sum of the first 10 numbers is: %d\n", sum);

    return 0;
}