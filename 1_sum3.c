/**
 * Question: Write a programme in C to calculate sum of 3 numbers using user input .
 */



#include<stdio.h>

int main(){
    float num1, num2, num3;

    printf("Enter your first number: ");
    scanf("%f",&num1);

    printf("Enter your second number: ");
    scanf("%f",&num2);
    
    printf("Enter your third number: ");
    scanf("%f",&num3);

    float sum_of_inputs = num1  + num2 + num3 ;

    printf(" The sum of given numbers is %f",sum_of_inputs);


    return 0;
}