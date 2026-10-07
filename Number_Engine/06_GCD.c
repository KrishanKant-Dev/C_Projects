#include <stdio.h>
#include <math.h>

int gcd(int x, int y);

int gcd(int x, int y)
{
    if (y == 0)
        return x;

    return gcd(y, x % y);
}

int main()
{
    int num1, num2;
    printf("Enter the value of First Number: ");
    scanf("%d", &num1);

    printf("Enter the value of Second Number: ");
    scanf("%d", &num2);

    printf("The GCD of %d and %d is: %d", num1, num2, gcd(num1, num2));
    return 0;
}