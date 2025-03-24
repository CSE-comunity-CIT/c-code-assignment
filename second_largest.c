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

    for(int i = 0; i< length; i++){


        if(numbers[i]> largest) {
            largest = numbers;
            numbers[i] = NULL;
        }
    }

    // printf("\nThe second largest number is %d ", secondLargest);
    return 0;
}