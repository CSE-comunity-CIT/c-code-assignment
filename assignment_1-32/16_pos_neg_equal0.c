/**
* Question: Write a programme in C to test whether a number entered is positive, negative, equal zero
*/

#include<stdio.h>


int main(){


    int number;
    printf("Please enter your number: ");
    scanf("%d", &number);

    if(number>0){

        printf("The entered number is a positive number.");
        
    }else if (number==0){
        printf("You entered 0");
        
    }else{
        printf("The entered number is a negative number.");
        
    }


    return 0;
}