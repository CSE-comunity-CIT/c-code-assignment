/**
 * Write a programme in C to pring the followin pattern 
 * 
 *      * * * * *
 *      * * * * *
 *      * * * * *
 *      * * * * *
 *      * * * * *
 */

 #include <stdio.h>

 int main() {
     int i, j;
     for (i = 0; i < 5; i++) {
         for (j = 0; j < 5; j++) {
             printf("* ");
         }
         printf("\n");
     }
     return 0;
 }