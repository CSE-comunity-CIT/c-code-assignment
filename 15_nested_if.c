/**
* Question: Write a programme in C to demonstrate the use of nested “if-structure”.
*/

#include<stdio.h>


int main(){


    int number;
    printf("Please enter your number: ");
    scanf("%d", &number);

    if(number>0){

        printf("The entered number is a positive number.");
        if(number%2 ==0 ){
            printf("The entered number is a positive even number.");
        }else{         
            printf("The entered number is a positive odd number.");
        }
    }else if (number==0){
        printf("You entered 0");
        
    }else{
        if(number%2 ==0 ){
            printf("The entered number is a negative even number.");
        }else{         
            printf("The entered number is a negative odd number.");
        }
    }


    return 0;
}