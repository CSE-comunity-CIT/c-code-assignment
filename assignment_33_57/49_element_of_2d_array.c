/**
* Question: Write a programme in C to print the elements of a 2D array
*/



#include<stdio.h>



int main(){

    int columnLength;
    int rowLength;

    printf("What is the row length of the matrix : ");
    scanf("%d",&rowLength);

    printf("What is the column length of the matrix : ");
    scanf("%d",&columnLength);


    int matrix[rowLength][columnLength];
    for (int i = 0; i < rowLength; i++){
        for (int j = 0; j < columnLength; j++){
            printf("What is the element of %d row and %d column [%d, %d] : ",i+1,j+1,i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }


    printf("\n\nThe matrix is : \n");
    for(int i= 0; i< rowLength; i++){
        for(int j = 0; j< columnLength; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
   
    
    
    return 0;
}
