
#include<stdio.h>

void printArray(int *arr, int length){
    printf("[");
    for(int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
    printf("]\n");
}
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

    int elementsArray[length];
    int indexArray[length][length];
    int count[length];


    int elementArrayIndex = 0;
    sortArray(arr, length);

    for(int i = 0; i< length; i++){
        int element = arr[i];
        if(elementsArray[elementArrayIndex] != element){
            elementsArray[elementArrayIndex] = element;
            
            count[elementArrayIndex] = 1;
            indexArray[elementArrayIndex][0] = i;
            elementArrayIndex++;
        }
        else{
            count[elementArrayIndex]++;
            indexArray[elementArrayIndex][count[elementArrayIndex]] = i;
        }
    }
    printf("Running...");
    for(int i = 0 ; i < length; i++){

        if(count[i] > 1){
            printf("Duplicate element %d found %d items at indices: ",count[i], elementsArray[i]);
            printArray(indexArray[i], count[i]);
            printf("\n");
        }
    }
    return 0;
}