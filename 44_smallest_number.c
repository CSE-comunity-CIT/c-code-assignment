/**
* Question: Write a programme in C to find the smallest number in an array of n integers. 
*/

#include<stdio.h>



int main(){


    int length;

    printf("How many numbers you want to take : ");
    scanf("%d",&length);

    int numbers[length] ;

    for(int i= 0; i< length; i++){

        printf("What is your number of %d ",i+1);
        scanf("%d",&numbers[i]);
        
    }

    int smallest = numbers[0];

    for(int i=0; i < length ; i++){
        int number = numbers[i];
        if(number < smallest){
            smallest = number;
        }
    }

    printf("\nThe smallest number is %d ", smallest);
    return 0;
}