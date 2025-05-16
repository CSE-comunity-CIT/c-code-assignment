/**
* Question: Write a programme in C to find the largest and smallest number 
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
    int largest= numbers[0];

    for(int i=0; i < length ; i++){
        int number = numbers[i];
        if(number < smallest){
            smallest = number;
        }

        if(number > largest){
            largest = number;
        }
    }

    printf("\nThe smallest number is %d ", smallest);
    printf("\nThe largest number is %d ", largest);
    return 0;
}