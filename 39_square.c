#include<stdio.h>

double square(double number){

    return number * number ;

}

int main(){

    double number;

    printf("What is the number: ");
    scanf("%lf",&number);

    printf("The square of the number %lf is %lf", number , square(number));
    return 0;
}