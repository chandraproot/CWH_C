/* dynamic memory allocation tutorial 45
 to run: gcc dyna.c ; size .\a.exe

four fuction for dyanmic memory allocation
1. malloc - initaized with garbage value
2. calloc - initaized with 0
3. realloc
4. free syntax - free(ptr)
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    //    int var = sizeof(int);
    //    printf("%d", var);
    //    use of malloc
    int *ptr;
    int n;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at %d of array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d is %d \n", i, ptr[i]);
    }

    return 0;
}