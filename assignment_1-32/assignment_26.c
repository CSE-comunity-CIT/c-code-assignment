/**
 * Write a programme in C to pring the followin pattern from take user input
 * 
 * 
 *          * 
 *          * * 
 *          * * *
 *          * * * * 
 */

#include <stdio.h>


int main()
{
    int row;
    printf("What will be your number of rows: ");
    scanf("%d", &row);


    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
