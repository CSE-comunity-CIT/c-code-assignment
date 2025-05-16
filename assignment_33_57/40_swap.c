/**
* Question: Write a programme in C to swap two numbers using the function.
*/


#include<stdio.h>


void swap(int *a, int *b){

    int c = *a;
    *a = *b;
    *b = c;
}


int ask(char chars[]){
    int number;
    printf("%s", chars);
    scanf("%d",&number);

    return number;
}

int main(){

    int firstNumber = ask("What is the first number: ");
    int secondNumber = ask("What is the second number: ");


    printf("firstNumber = %d , secondNumbere = %d\n" , firstNumber , secondNumber);

    swap(&firstNumber, &secondNumber);
    printf("After swap firstNumber = %d , secondNumbere = %d" , firstNumber , secondNumber);
    // printf("The sum of the %d and %d is %d", firstNumber, secondNumber , sum(firstNumber, secondNumber));
    return 0;
}