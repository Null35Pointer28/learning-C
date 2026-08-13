#include <stdio.h>

int main()
{
    int n, s, rev = 0, orig;
    printf("Write the number of your choice: ");
    scanf("%d", &n);
    orig = n;

    while (n)
    {
        s = n % 10;
        n = n / 10;

        rev = rev * 10 + s;
    }

    if(rev == orig)
    {
        printf("Yor number is a pallindrome \n");
    }
    else{
        printf("Yor number is not a pallindrome \n");
    }

    return 0;
}