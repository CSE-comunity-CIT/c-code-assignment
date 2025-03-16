/**
 * Write a programme in c to calculate the sum of numbers from m to n using for loop
 */


#include <stdio.h>


int main() {
    int m, n, sum = 0;

    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = m; i <= n; i++) {
        sum += i;
    }

    printf("The sum of numbers from m to n is: %d\n", sum);

    return 0;
}