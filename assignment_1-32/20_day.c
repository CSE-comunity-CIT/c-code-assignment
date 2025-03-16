/**
* Question: Write a programme in C to enter number from 1 to 7 and display corresponding
* day of the week using ‘switch case statement’.
*/

#include<stdio.h>

int main(){

    int day;
    printf("Please enter your day: ");
    scanf("%d", &day);

    if(day <=0 || day >7){

        printf("Invalid day entered");
        return 0;
    }


    switch (day){
        case 1:
            printf("Sun");
            break;
        case 2:
            printf("Mon");
            break;
        case 3:
            printf("Tue");
            break;
        case 4:
            printf("Wed");
            break;
        case 5:
            printf("Thus");
            break;
        case 6:
            printf("Fri");
            break;
        case 7:
            printf("Sat");
            break;
        default:
            printf("You have entered a invalid code");
            break;
    }



    return 0;
}