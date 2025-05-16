/**
* Question: Write a programme in C to insert a number at a given location in an array
*/

#include<stdio.h>

void printArray(int *array, int length){
    printf("[");
    for(int i =0; i< length; i++ ){ printf("%d ", *(array+i));}
    printf("]");
}


int main(){

    int length;
    printf("What is the length of your array: ");
    scanf("%d",&length);
    
    int arr[length];
    for(int i = 0; i< length ; i++) {
        printf("What is the number at %d: " , i);
        scanf("%d",&arr[i]);
    }


    printf("The array is : \n");
    printArray(arr,length);

    int number , position;
    printf("Which number you want to add and whare (number , position): ");
    scanf("%d %d",&number, &position);

    int newArray[length +1 ], delay = 0;
    for(int i = 0; i<= length;i++){
        newArray[i] = arr[i];
    }
    newArray[position] = number;
    delay++;
    for(int i= position ; i <  length+delay ; i++){
        newArray[i+delay]= arr[i]; 
    }

    printf("\nThe new array is : ");
    printArray(newArray, length+1);

    
    return 0;
}
