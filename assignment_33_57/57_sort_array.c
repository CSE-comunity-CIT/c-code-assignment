// Write a program in C to enter n no array and redisplay the array with
// element being sorted in ascending order.
#include<stdio.h>

void sortArray(int *arr, int length){
    for(int i = 0; i < length - 1; i++){
        for(int j = 0; j < length - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

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

    sortArray(arr, length);

    printf("Sorted array: ");
    printArray(arr, length);

    return 0;
}
