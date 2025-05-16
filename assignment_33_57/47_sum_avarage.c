
/**
* Question: Write a programme in C to to calculate the sum and avarage of the given numbers of array
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

    int sum = 0;
    for(int i = 0; i< length; i++){
        sum += numbers[i];
    }
    float avarage = (float)sum/length;


    printf("\nThe sum of the numbers is %d ", sum);
    printf("\nThe avarage of the numbers is %.2f ", avarage);
  
    return 0;
}