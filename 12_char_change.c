/**
 * Question: Write a programme in C to enter any char to get from user , if the entered char is in lower case, then convert it into upper 
 * case if it is upper case then convert it into lower case.
 */

 #include<stdio.h>

int main(){

    char charecter;
    printf("Please enter your charecter: ");
	scanf("%c", &charecter);


   
    if(charecter >= 'a' && charecter <= 'z'){
        printf("Your output is %c", charecter - 32);
    }
    else if (charecter >= 'A' && charecter <= 'Z')
    {
        printf("Your output is %c", charecter + 32);
    }else{
        printf("You have entered a invalid charecter");
    }
    
   

    return 0;
}