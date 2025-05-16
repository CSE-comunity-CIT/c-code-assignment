// Write a programme in C to delete a number from a given location in an array.

#include<stdio.h>

void printArray(int *arr, int length){
    printf("[");
    for(int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

int main(){

    int length;
    printf("Enter the length of the array: ");
    scanf("%d", &length);

    int arr[length];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < length; i++){
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    printArray(arr, length);

    int location;   
    printf("Enter the location of the element to delete: ");
    scanf("%d", &location);


    if(location < 0 || location >= length){
        printf("Invalid location\n");
        return 1;
    }

    for(int i = location; i < length - 1; i++){arr[i] = arr[i + 1];}
    length--;


    printf("Array after deletion: ");
    printArray(arr, length);


    return 0;
}