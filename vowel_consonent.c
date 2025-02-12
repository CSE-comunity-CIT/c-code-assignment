/**
 * Question: Write a programme in C to enter a char and then determine wheather it is a vowel or not;
 */


 #include<stdio.h>


 int main(){

    char charecter;
    printf("Please enter your charecter: ");
	scanf("%c", &charecter);

    if(charecter == 'a' || charecter == 'e' || charecter == 'i' || charecter == 'o' || charecter == 'u'){
        printf("You have entered a vowel.");
    }else if( ((charecter >= 'a' && charecter <= 'z') || (charecter >= 'A' && charecter <= 'Z')) && 
    (charecter != 'a' || charecter != 'e' || charecter != 'i' || charecter != 'o' || charecter != 'u')){

        printf("You have entered a consonent.");
    }else{
        printf("You have entered a invalid charecter.");
    }

    return 0;
 }