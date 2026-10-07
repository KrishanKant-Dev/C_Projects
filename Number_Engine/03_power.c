#include <stdio.h>
#include <math.h>

void power();

void power()
{
    int number, exponent,result;

    printf("Enter the value of base Number: ");
    scanf("%d",&number);

    printf("Enter the value of Exponent: ");
    scanf("%d",&exponent);

    result = pow(number,exponent);
    printf("The Result is: %d",result);
}
int main()
{
    power();
    return 0;
}