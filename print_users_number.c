/**
 * Question: Write a programme in C to takes two numbers from user and print those numbers.
 */


#include<stdio.h>

int main(int argc, char const *argv[])
{
    float num1, num2;

    printf("Enter first number : ");
    scanf("%f", &num1);

    printf("Enter second number : ");
    scanf("%f", &num2);

    printf("You have put %f and %f", num1, num2);

    return 0;
}
