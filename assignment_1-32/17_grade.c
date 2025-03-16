/**
* Question:	Write a programme in C to display the examination result. (Grade)
*/
#include<stdio.h>


int main(){


    int number;
    printf("Please enter your number: ");
    scanf("%d", &number);


    if(number <0 || number> 100){

        printf("You have entered a invalid result.");
        return 0;
    }

    if(number>=91 && number <= 100){
        printf("The result is outstanding. O");
        
    }else if(number>=81 && number <= 90){
        printf("The result is excelent. E");
        
    }else if(number>=71 && number <= 80){
        printf("The result is very good. A" );
        
    }else if(number>=61 && number <= 70){
        printf("The result is good. B");
        
    }else if(number>=51 && number <= 60){
        printf("The result is avarage. C");
        
    }else if(number>=40 && number <= 50){
        printf("The result is not so good. D");
        
    }else{
        printf("The result is Failed. F");
    }


    return 0;
}