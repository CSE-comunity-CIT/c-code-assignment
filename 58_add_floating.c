// Write a program in C to add two floating numbers.
// The result should contain only two digits after the decimal. (pointer)
#include <stdio.h>

void addFloats(float *num1, float *num2, float *result) {
    *result = *num1 + *num2;
}

int main() {
    float number1, number2, sum;
    
    // Input first number
    printf("Enter first number: ");
    scanf("%f", &number1);
    
    // Input second number
    printf("Enter second number: ");
    scanf("%f", &number2);
    
    // Call function to add numbers using pointers
    addFloats(&number1, &number2, &sum);
    
    // Display the result with two decimal places using %.2f format specifier
    printf("Sum = %.2f\n", sum);
    
    return 0;
}