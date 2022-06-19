#include <stdio.h>
int main()
{
    int money;
    printf("Enter the cash you have: ");
    scanf("%d", &money);
    if (money > 100)
    {
        for (int i = 0; i < (money / 20); i++)
        {
            printf("Take %d Burgers\n", i);
        }
    }

    else if (money > 50)
    {
        printf("Try Fries");
    }

    else
    {
        printf("Go get some more money!");
    }

    return 0;
}