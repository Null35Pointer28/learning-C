// Factorial
//  factorial = (number*number - 1)
//  n user input, fact = n(n-i)

#include <stdio.h>

int main()
{
    int n, i;
    int fact = 1;

    printf("Enter the number whose factorial you want: ");
    scanf("%d", &n);

        for (i = 1; i<=n; i++)
        {
            fact *= i;
        }

        printf("The factorial of %d is %d \n: ", n, fact);

    return 0;
}