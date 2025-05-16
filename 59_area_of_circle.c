// Write a program in C to calculate the area of a circle. (pointer)

#include<stdio.h>

void calculate_area(float *radius, float *area) {
    *area = 3.14 * (*radius) * (*radius);
}

int main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);


    calculate_area(&radius, &area);

    printf("The area of the circle is: %.3f", area);
    return 0;


}