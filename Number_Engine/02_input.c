#include <stdio.h>

int choose_action();
int main()
{
    printf("You Choose: %d",choose_action());
    return 0;
}

int choose_action()
{
    int chosen;
    printf("\nEnter Your Choice (1-5): ");
    scanf("%d",&chosen);
    return chosen;
}