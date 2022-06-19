#include <stdio.h>
int main()
{
    int a, b;
    printf("Search Number:\n");
    scanf("%d", &b);
    printf("Enter value greater than %d: ", b);
    scanf("%d", &a);
    for (int i = 0; i <= a; i++)
    {
        if (b > a)
        {
            printf("Value Error\n");
            break;
        }

        if (i == b)
        {
            printf("%d\n", i);
            printf("Number found");
            break;
        }
    }

    return 0;
}