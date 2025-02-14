/**
* Question: Write a programme to show use bitwise operators.
*/



#include<stdio.h>



int main(){

    int a = 5;
    int b = 5;

    int and_res= a & b;
    printf("\nThe result of bitwise AND is %d",and_res);

    
    int or_res= a | b;
    printf("\nThe result of bitwise OR is %d",or_res);
    
    int xor_res= a ^ b;
    printf("\nThe result of bitwise XOR is %d",xor_res);

    int complement_res= ~a ;
    printf("\nThe result of bitwise complement is %d",complement_res);


    int shift_left_res= a >> 1;
    printf("\nThe result of bitwise SHIFT left is %d",shift_left_res);
    
    int shift_right_res= a << 1;
    printf("\nThe result of bitwise SHIFT right is %d",shift_right_res);
    
    
    return 0;
    
    
}