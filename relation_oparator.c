/**
 * Question : Write a programme in C to show the use of relational oparators.
 */

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a=5, b=10;

    int greater_than_result = a > b; // Returns false 
    int greater_than_result2 = b > a; // Returns true 

    int less_than_result = a < b; // Returns true 
    int less_than_result2 = b < a; // Returns false 

    int greater_than_equal_result = a >= b; // Returns false 
    int greater_than_equal_result2 = b >= a; // Returns true 
    int greater_than_equal_result3 = b >= 10; // Returns true 

    int less_than_equal_result = a <= b; // Returns true 
    int less_than_equal_result2 = b <= a; // Returns false 
    int less_than_equal_result3 = b <= 10; // Returns true 

    printf("\nGreater than oparator result: %d", greater_than_result );
    printf("\nGreater than oparator result for second statement: %d", greater_than_result2 );
    
    printf("\nLess than oparator result: %d", less_than_result );
    printf("\nLess than oparator result for second statement: %d", less_than_result2 );
    
    printf("\nGreater than equal oparator result: %d", greater_than_equal_result );
    printf("\nGreater than equal oparator result for second statement: %d", greater_than_equal_result );
    printf("\nGreater than equal oparator result for third statement: %d", greater_than_equal_result );
    
    
    printf("\nLess than equal oparator result: %d", less_than_equal_result );
    printf("\nLess than equal oparator result for second statement: %d", less_than_equal_result );
    printf("\nLess than equal oparator result for third statement: %d", less_than_equal_result );
    

    
    return 0;
}
