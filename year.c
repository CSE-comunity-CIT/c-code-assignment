/**
 * Question: Write a programme in C to find whether a given year is a leap year or not.
 */


#include<stdio.h>

int main(){

    int year;
	printf("Please enter your year: ");
	scanf("%d", &year);

    if(year <= 0){
        printf("You have entered a wrong year");
        return 0;
    }

    if(year % 4 ==0){

        printf("The year is a leap year");
    }else{
        
        printf("The year is not a leap year");
    }

    return 0;
}