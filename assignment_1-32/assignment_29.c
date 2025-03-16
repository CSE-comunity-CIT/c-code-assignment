/**
 * Write a programme in C to pring the followin pattern from take user input
 * 
 *      a 
 *      a b 
 *      a b c 
 *      a b c d 
 *      a b c d e
 */

 #include <stdio.h>


 int main()
 {
     int row;
     printf("What will be your number of rows: ");
     scanf("%d", &row);
 
 
     for(int i = 1; i <= row; i++)
     {
         for(int j = 0; j < i; j++)
         {
             printf("%c ",97+j);
         }
         printf("\n");
     }
     return 0;
 }
 