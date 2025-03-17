#include<stdio.h>

int sum(int a, int b){
    return a + b;
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
    printf("The sum of the %d and %d is %d", firstNumber, secondNumber , sum(firstNumber, secondNumber));
    return 0;
}