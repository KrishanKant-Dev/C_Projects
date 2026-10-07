#include <stdio.h>

int sum_of_digits(int my_num);
// 567
int sum_of_digits(int my_num)
{
    if (my_num == 0)
        return 0;
    return (my_num%10) + sum_of_digits(my_num/10);
}
int main()
{
    int my_num;

    printf("Enter The Number: ");
    scanf("%d",&my_num);

    printf("The sum of the Digits of %d is: %d",my_num,sum_of_digits(my_num));
    return 0;
}