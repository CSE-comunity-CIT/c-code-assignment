/**
 * Write a programme in C to pring the followin pattern from take user input
 * 
 *      1 
 *      1 2 
 *      1 2 3 
 *      1 2 3 4 
 *      1 2 3 4 5
 */

 #include <stdio.h>


 int main()
 {
     int row;
     printf("What will be your number of rows: ");
     scanf("%d", &row);
 
 
     for(int i = 1; i <= row; i++)
     {
         for(int j = 1; j <= i; j++)
         {
             printf("%d ",j);
         }
         printf("\n");
     }
     return 0;
 }
 