#include <stdio.h>

int main()
{
    int i;
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    for (i = 0; i <= a; i++)
    {
        printf("Counting - %d\n", i);
    }
    return 0;
}