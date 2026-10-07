#include <stdio.h>

void display ();
int main()
{
    display();   
    return 0;
}

void display ()
{
    printf("=== Multi Utility Number Engine ===");
    printf("\n\n1. Calculate Power (base to exponent)");
    printf("\n2. Check Palindrome");
    printf("\n3. Calculate Sum of Digits");
    printf("\n4. Find GCD (Greatest Common Divisor)");
    printf("\n5. Exit");
}