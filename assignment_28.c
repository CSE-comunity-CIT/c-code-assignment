/**
 * Write a programme in C to pring the followin pattern from take user input
 * 
 *      1 
 *      2 2
 *      3 3 3
 *      4 4 4 4
 *      5 5 5 5 5
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
             printf("%d ",i);
         }
         printf("\n");
     }
     return 0;
 }
 