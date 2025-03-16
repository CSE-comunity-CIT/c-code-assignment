/**
 * Question : Write a programme in C to determine whether a person is eligible to vote or not
 */

#include <stdio.h>

int main()
{
	int age;
	printf("Please enter your age: ");
	scanf("%d", &age);

	
	if (age >= 18){
		printf("You are eligible for voting");
	}
	else{
		printf("You are not eligible for voting");
	}
	return 0;
}