/**
* Question: Write a programme in C to determine whether an entered character is vowel or not.
*/

#include<stdio.h>


int main(){


    char charecter;
    printf("Please enter your charecter : ");
    scanf("%c", &charecter);

    if(!((charecter >= 'a' && charecter <= 'z')||(charecter >= 'A' && charecter <= 'Z')) ){
        printf("You have entered a invalid charecter");
        return 0;
    }


    switch (charecter){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':

            printf("You have entered a vowel");
            break;
            
            
        default:
            printf("You have entered a consonent");

            break;
    }

    return 0;
}