/**
 * Question: Write a programme in C to enter a char and then determine whether it is a vowel or not;
 */


 #include<stdio.h>
//  #include<ctype.h>



 int main(){

    char charecter;
    printf("Please enter your charecter: ");
	scanf("%c", &charecter);


  
    // charecter = tolower(charecter);

    if(charecter >= 'A' && charecter <='Z'){
        charecter = charecter +32;
    }


    if(charecter<'a' || charecter >'z'){
        printf("You have entered a invalid charecter.");
        return 0;// It will make function return and stop executing code.
    }


    if(charecter == 'a' || charecter == 'e' || charecter == 'i' || charecter == 'o' || charecter == 'u'){
        printf("You have entered a vowel.");


    }else{
        printf("You have entered a consonent.");
    }

    return 0;
 }