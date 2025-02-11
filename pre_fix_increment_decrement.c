/***
* Question : Write a programme in C to illustrate th3 use of unary prefix increment/decrement oparators .
 */

 #include<stdio.h>

 int main(){

    int a = 5;
    int pre_inc = ++a;

    printf("\nThe result of pre increment is %d and a is %d", pre_inc,a);
    
    int b=5;
    int pre_dec = --b;

    printf("\nThe result of pre decrement is %d and b is %d", pre_dec,b);

    return 0;
 }