/**
 *  Question : Write a programme in C to perform addition , substraction , divison ,
 *  multiplication and module divison on two interger numbers
 * 
 */


#include<stdio.h>


int main(int argc, char const *argv[])
{
    int a = 10, b= 5;

    int addition_result = a + b;
    int substitution_result = a - b;
    int multiplication_result = a * b;
    int division_result = a/b;
    int modulus_result = a % b;

    printf("Addition result : %d", addition_result);
    printf("Substitution result : %d", substitution_result);
    printf("Multiplication result : %d", multiplication_result);
    printf("Division result : %d", division_result);
    printf("Modulus result : %d", modulus_result);
    return 0;
}
