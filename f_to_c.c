#include <stdio.h>
int main()
{
    float c, f;
    int i = 0;
    while (i < 6)
    {
        printf("Enter temperature in farenheit: ");
        scanf("%f", &f);
        c = (f - 32) * 5 / 9;
        printf("The temperature in celcius is : %f\n", c);
        i++;
    }

    return 0;
}