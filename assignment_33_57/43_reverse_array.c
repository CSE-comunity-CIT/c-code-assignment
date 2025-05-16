/**
 * Question: Write a program in C to implement an array of 10 integers and print it in reverse order.
 *
 * Functionality:
 * - Accepts 10 integer elements from the user.
 * - Prints the original array.
 * - Reverses the array and prints the reversed array.
 */


#include<stdio.h>



int main(){
    int numbers[10];
    int reverseNumber[10];


    for(int i=0; i <10 ; i++){

        printf("What is your number of %d ",i+1);
        scanf("%d",&numbers[i]);

    }
    printf("The list of numbers is [ ");


    for(int i=0 ; i<10 ; i++){
        printf("%d ", numbers[i]);

    }
    printf("]\n");
    
    
    printf("The reverse order of the list of numbers [");
    for(int i=9;i>=0;i--){
        reverseNumber[10-i] = numbers[i];
        printf("%d ", numbers[i]);
    }
    printf("]\n");

    return 0;
}