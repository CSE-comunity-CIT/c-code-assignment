/**
 * Question: Write a programme to find wheather the given number is odd or even.
 */


#include<stdio.h>

int main(int argc, char const *argv[])
{
	int number;
	printf("Please enter your number: ");
	scanf("%d", &number);

	if(number % 2 == 0){
		printf("The number is even");
	}else{
		
		printf("The number is odd");
	}

	return 0;
}
