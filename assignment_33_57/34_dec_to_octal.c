/**
* Question: Write a programme in C to enter a decimal number. Calculate and display the octal equivalent number;
*/






#include<stdio.h>
#include<math.h>



int main(){
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d",&decimal);
    
    int maxLength = (int)(log(decimal)/log(8)) + 1 ;
    int octal[maxLength] ;

    int result = decimal;
    int index = maxLength-1;
    while (result != 0)
    {
        octal[index] = result % 8;
        result /= 8;

        index--;
    }
    

    for(int i = 0; i < maxLength; i++){
        printf("%d",octal[i]);
    }
    
    return 0;
}