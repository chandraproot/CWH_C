// #include <stdio.h>
// int main()
// {
//     int num, n;
//     int f = 0;
//     int s = 1;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     for (int i = 1; i <= num; i++)
//     {
//         if (i == 1)
//         {
//             printf("%d", f);
//         }
//         else if (i == 2 || i == 3)
//         {
//             printf("%d", s);
//         }
//         else
//         {
//             s = n;
//             n = s + n;
//             printf("%d", n);
//         }
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int t1 = 0, t2 = 1, nextTerm = 0, n;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    // displays the first two terms which is always 0 and 1
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    nextTerm = t1 + t2;

    for (int i = 1; i < n-1; i++)
    {

        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    return 0;
}