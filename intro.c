/**
 * Question :  Write programme in C to print your name , roll, department using user input .
 */


#include<stdio.h>

int main(int argc, char const *argv[])
{
    char name[] = "";
    char department[]="";
    int roll;

    printf("Enter your name: ");
    scanf("%s", &name);

    printf("Enter your roll: ");
    scanf("%d", &roll);

    printf("Enter your department: ");
    scanf("%s", &department);

    printf("Your are %s form %s department , and your roll is %d", name , department , roll);

    return 0;
}


// This code does not work properly .

