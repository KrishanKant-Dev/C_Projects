#include <stdio.h>

void palindrome();

void palindrome()
{
    int entered_number, original, reverse = 0 , last_digit;  // 121
    printf("Enter The Number: ");
    scanf("%d",&entered_number);

    original = entered_number;

    while(entered_number>0)
    {
        last_digit = entered_number%10;
        reverse = reverse *10 + last_digit;
        entered_number /= 10;
    }
    if (original == reverse)
        printf("%d is Palindrome",original);
    else
        printf("%d isn't Palindrome",original);
}

int main()
{
    palindrome();
    return 0;
}