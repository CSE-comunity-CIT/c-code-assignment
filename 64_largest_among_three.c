
// Write a program in C using structure to find the largest of three numbers.


#include <stdio.h>

struct Numbers {
    int a;
    int b;
    int c;
};

int main() {
    struct Numbers nums;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &nums.a, &nums.b, &nums.c);
    
    int largest = nums.a;
    if (nums.b > largest) {
        largest = nums.b;
    }
    if (nums.c > largest) {
        largest = nums.c;
    }
    
    printf("The largest number is: %d\n", largest);
    
    return 0;
}