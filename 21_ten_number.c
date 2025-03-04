/**
* Question: Write a programme in C to accept a number from 1 to 10 print whether the number 
* is even or odd with a ‘switch case statement’.
*/

#include<stdio.h>

int main(){

    int number;
    printf("Please enter your number: ");
    scanf("%d", &number);

    if(number <=0 || number >10){

        printf("Invalid number entered");
        return 0;
        
    }


    switch (number){
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
            printf("Odd number entered");
            break;
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
            printf("Even number entered");
            break;
        
       
        default:
            printf("You have entered a invalid code");
            break;
    }



    return 0;
}