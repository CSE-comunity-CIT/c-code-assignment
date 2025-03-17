#include<stdio.h>
#include<math.h>


int isAmstrongNumber(int number){
    int length = (int)log10(number) +1;
    int need= number;

    int multiplicationResult = 0;

    for(int i = length-1; i>=0; i--){

        int powerResult = (int)pow(10, i);
        int nthIndexNumber = need / powerResult;
        multiplicationResult += ((int)pow(nthIndexNumber, 3));
        need = need - (nthIndexNumber * powerResult);
    
    }
    if(multiplicationResult == number) return 1; 
    return 0;
}

int main(){

    int number;

    printf("Enter a number: ");
    scanf("%d",&number);


    printf(isAmstrongNumber(number)? "The number is amstrong number.": "The number is not amstrong number.");


    return 0;
}