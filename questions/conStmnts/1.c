// find greater number

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("The number %d is greater than %d \n", a, b);
    }
    else
    {
        printf("The number %d is greater than %d \n", b, a);
    }

    return 0;
}