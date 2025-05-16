/**
* Question: Write a programme in C to find second largest number using an array of n numbers.
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

    int largest= numbers[0];
    int secondLargest = numbers[0];

    for(int i = 0; i< length; i++){


        if(numbers[i]> largest) {

            secondLargest = largest;
            largest = numbers[i];
        }
    }

    printf("\nThe second largest number is %d ", secondLargest);
    return 0;
}