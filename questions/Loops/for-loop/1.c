// Print numbers from 1 to n

#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter the last number you want to be printed: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d \n", i);
    }

    return 0;
}