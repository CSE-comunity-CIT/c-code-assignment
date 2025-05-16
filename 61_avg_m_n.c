// Write a programme in C to display the sum and average of numbers from m to n. (pointer)

#include<stdio.h>
void calculate_sum(int *m, int *n, int *sum) {
    *sum = 0.5 * ((*n-*m)(*n + *m - 1));
}
int main() {
    int m, n, sum = 0;

    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    calculate_sum(&m, &n, &sum);

    printf("The sum of the numbers from m to n is: %d", sum);
    return 0;


}