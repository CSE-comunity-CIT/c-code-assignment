/**
 * Question: Write a programme in C to calculate the area of a triangle
 */

#include<stdio.h>

int main(int argc, char const *argv[])
{
    float base;
    float height;
    

    printf("Enter your triangle's base: ");
    scanf("%f", &base);

    printf("Enter your triangle's height: ");
    scanf("%f", &height);
    
    float area = 0.5 * base * height;

    printf(" The area of the given triangle is %f", area);

    return 0;
}
