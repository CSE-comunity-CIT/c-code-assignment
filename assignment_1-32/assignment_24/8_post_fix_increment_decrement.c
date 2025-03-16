/***
* Question: Write a programme in C to illustrate the use of unary postfix increment/decrement oparator
*/


 #include<stdio.h>

 int main(){

    int a = 5;
    int post_inc = a++;

    printf("\nThe result of post increment is %d and a is %d", post_inc,a);
    
    int b=5;
    int post_dec = b--;

    printf("\nThe result of post decrement is %d and b is %d", post_dec,b);

    return 0;
 }