/**
* Question: Write a programme in C to check whether a number is prime or not using the function.
*/

#include<stdio.h>

int isPrime(int number){

    int counter = 0;

    for(int i = 1; i <= number; i++){
        int remainder = number % i;
        if(remainder==0){
            counter++;
        }
    }

    if(counter==2){
        return 1;
     }else {

        return 0;
     }
}

int main(){

    int number;

    printf("Enter a number: ");
    scanf("%d",&number);

    if(isPrime(number)) {


        printf("The number is prime.");
    }
    else{
        printf("The number is not prime.");
    }
    return 0;
}