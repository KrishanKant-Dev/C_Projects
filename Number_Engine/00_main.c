#include <stdio.h>
#include <math.h>

void display();
int choose_action();
void power();
void palindrome();
int sum_of_digits(int my_num);
int gcd(int x, int y);

int main()
{
    int choice, my_num, num1, num2;
    display();

    do
    {
        choice = choose_action();

        switch (choice)
        {

        case 1:
        {
            printf("\n--- Calulating Power ---\n");
            power();
            printf("\n");
            break;
        }

        case 2:
        {
            printf("\n--- Verifying Palindrome ---\n");
            palindrome();
            printf("\n");
            break;
        }

        case 3:
        {
            printf("\n--- Calculating Sum of Digits ---\n");
            printf("Enter The Number: ");
            scanf("%d", &my_num);
            printf("The sum of the Digits of %d is: %d", my_num, sum_of_digits(my_num));
            printf("\n");
            break;
        }

        case 4:
        {
            printf("\n--- Calulating GCD ---\n");
            printf("Enter the value of First Number: ");
            scanf("%d", &num1);

            printf("Enter the value of Second Number: ");
            scanf("%d", &num2);

            printf("The GCD of %d and %d is: %d", num1, num2, gcd(num1, num2));
            printf("\n");
            break;
        }

        case 5:
        {
            printf("");
            break;
        }
        default:
        {
            printf("\n<Enter a Valid Action>");
            break;
        }
        }
    }

    while (choice != 5);

    if (choice == 5)
    {
        printf("\n<Exiting>");
    }

    return 0;
}

void display()
{
    printf("\n=== Multi Utility Number Engine ===");
    printf("\n\n1. Calculate Power (base to exponent)");
    printf("\n2. Check Palindrome");
    printf("\n3. Calculate Sum of Digits");
    printf("\n4. Find GCD (Greatest Common Divisor)");
    printf("\n5. Exit");
}

int choose_action()
{
    int chosen;
    printf("\nEnter Your Choice (1-5): ");
    scanf("%d", &chosen);
    return chosen;
}

void power()
{
    int number, exponent, result;

    printf("Enter the value of base Number: ");
    scanf("%d", &number);

    printf("Enter the value of Exponent: ");
    scanf("%d", &exponent);

    result = pow(number, exponent);
    printf("The Result is: %d", result);
}

void palindrome()
{
    int entered_number, original, reverse = 0, last_digit; // 121
    printf("Enter The Number: ");
    scanf("%d", &entered_number);

    original = entered_number;

    while (entered_number > 0)
    {
        last_digit = entered_number % 10;
        reverse = reverse * 10 + last_digit;
        entered_number /= 10;
    }
    if (original == reverse)
        printf("%d is Palindrome", original);
    else
        printf("%d isn't Palindrome", original);
}

int sum_of_digits(int my_num)
{
    if (my_num == 0)
        return 0;
    return (my_num % 10) + sum_of_digits(my_num / 10);
}

int gcd(int x, int y)
{
    if (y == 0)
        return x;

    return gcd(y, x % y);
}