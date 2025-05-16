// Write a programme in C to convert a floating-point number into integer.
#include<stdio.h>

int main() {
    float number;
    printf("Enter a number: ");
    scanf("%f", &number);
    printf("The integer value of %f is %d", number, (int)number);
    return 0;
}