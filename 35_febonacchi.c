/**
* Question: Write a programme in C to display febonacchi numbers 
*/

#include<stdio.h>



int main(){
    int term;

    printf("Plese enter the term number: ");
    scanf("%d",&term);
    

    long int series[term];

    series[0] =1;
    series[1] =1;

    for(int i = 0; i < term ; i++){
        if(i >= 2){
            series[i] = series[i-1] + series[i-2];
        }

        printf("%d  ", series[i]);
    }

    return 0;
}
