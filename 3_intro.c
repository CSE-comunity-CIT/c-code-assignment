/**
 * Question :  Write programme in C to print your name , roll, department using user input .
 */


#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    char name[30] = "";
    char department[]="";
    int roll;


    printf("Enter your name: ");
    // scanf("%s %s", name);
    fgets(name,sizeof(name),stdin);

    printf(name);
    
    printf("Enter your roll: ");
    scanf("%d", &roll);
    
    printf("Enter your department: ");
    scanf("%s", &department);
    
    printf(name);
    printf("Your are %.30s form %s department , and your roll is %d",name , department , roll);

    return 0;
}


// This code does not work properly .

