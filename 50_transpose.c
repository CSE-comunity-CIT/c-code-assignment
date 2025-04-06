/**
* Question: Write a programme in C to transpose a 3X3 matrix.
*/


#include<stdio.h>

void printAskOrTransposeMatrix(int * matrix, int rowLength, int columnLength, int isAsk,  int printTranspose){
    for(int i= 0; i< rowLength; i++){
        for(int j = 0; j< columnLength; j++){
            if(isAsk){

                printf("What is the element at [%d , %d]", i +1, j+1);
                scanf("%d",(matrix +i * columnLength + j));
               
            }
            else printf("%d ",*(matrix + (printTranspose ? (i * columnLength + j) : (j * rowLength  + i) )));
            
        }
        printf("\n");
    }
}

int main(){
    int columnLength;
    int rowLength;

    printf("What is the row length of the matrix : ");
    scanf("%d %d",&rowLength,&columnLength);


    int matrix[rowLength][columnLength];
    printAskOrTransposeMatrix(*matrix, rowLength, columnLength, 1, 0);

    printf("\n\nThe matrix is : \n");
    printAskOrTransposeMatrix(*matrix, rowLength, columnLength, 0,0);
   

    printf("\n\nThe transpose matrix is : \n");
    printAskOrTransposeMatrix(*matrix,rowLength, columnLength ,0,1);
    
  
    return 0;
}