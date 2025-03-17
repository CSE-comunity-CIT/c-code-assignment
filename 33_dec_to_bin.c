/**
* Question: Write a progrmme  in  c  to enter a decimal number , calculate and display the binary equivalent number;
*/



#include<stdio.h>
#include<math.h>


int main(){
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d",&decimal);
    int maxLength = (int)log2(decimal)+1;
    char binary[maxLength] ;

    int need = decimal ;
    


    for(int i = maxLength; i >= 0 ; i--) {
        int powerIndex = (int)pow(2 , i);
        int needResult = need - powerIndex;
        if(needResult >= 0 ){
            need = needResult;
            binary[maxLength-i] = '1';
        }else{
            binary[maxLength -i] = '0';
        }
    }



    printf("%s", binary);
    
    
    return 0;
}
