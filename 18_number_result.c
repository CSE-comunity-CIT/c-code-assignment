/**
* Question: Write a programme in C to enter, the marks of student in four subjects and then calculate
* the total, and aggregate and display the grade obtain by the student.
*/

#include<stdio.h>


int main(){

    float sub1_num,sub2_num,sub3_num,sub4_num;
    
    printf("Please enter your subject 1 no out of 100: ");
    scanf("%f", &sub1_num);

    printf("Please enter your subject 2 no out of 100: ");
    scanf("%f", &sub2_num);


    printf("Please enter your subject 3 no out of 100: ");
    scanf("%f", &sub3_num);


    printf("Please enter your subject 4 no out of 100: ");
    scanf("%f", &sub4_num);

    float total_number=sub1_num+ sub2_num + sub3_num + sub4_num;

    float percentage = total_number / 4;


    printf("Total marks is %f",total_number);

    if(percentage>=91 && percentage <= 100){
        printf("The result is outstanding. O");
        
    }else if(percentage>=81 && percentage <= 90){
        printf("The result is excelent. E");
        
    }else if(percentage>=71 && percentage <= 80){
        printf("The result is very good. A" );
        
    }else if(percentage>=61 && percentage <= 70){
        printf("The result is good. B");
        
    }else if(percentage>=51 && percentage <= 60){
        printf("The result is avarage. C");
        
    }else if(percentage>=40 && percentage <= 50){
        printf("The result is not so good. D");
        
    }else{
        printf("The result is Failed. F");
    }


    return 0;
}