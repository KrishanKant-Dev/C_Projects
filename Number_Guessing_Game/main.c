#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator using current time so numbers change every run
    srand(time(0));

    // Generate a random number between 1 and 100
    int num = (rand() % 100) + 1;
    int guessed_number, i, status = 1;

    // Use 'number' in your game loop...
    printf("I Have Generated a Number between 1-100, You will Have Fun Guessing it ;) ");
    printf("\nEnter Your Guess: ");
    scanf("%d", &guessed_number);

    if (guessed_number == num)
    {
        printf("Yes You are Correct, The number is: %d\n", num);
        printf("You Took 1 Guess");
    }

    else
    {
        status = 0;
        for (i = 1; guessed_number != num; i++)
        {
            if (guessed_number < num - 10)
            {
                printf("Too Low, Guess Higher Number:");
                scanf("%d", &guessed_number);
            }

            else if (guessed_number > num + 10)
            {
                printf("Too High, Guess Lower Number:");
                scanf("%d", &guessed_number);
            }

            else if (guessed_number < num && guessed_number >= num - 10)
            {
                printf("You're close, Guess a Little Higher Number: ");
                scanf("%d", &guessed_number);
            }

            else if (guessed_number > num && guessed_number <= num + 10)
            {
                printf("You're close, Guess a Little Lower Number: ");
                scanf("%d", &guessed_number);
            }
            printf("\n");
        }
    }
    if (!status)
    {
        printf("Yes You are Correct, The number is: %d\n", num);
        printf("You Took %d Guess",i);
    }
    return 0;
}
