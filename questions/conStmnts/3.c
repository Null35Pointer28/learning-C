// valid voterr

#include <stdio.h>

int main()
{
    char string[20];
    int age;

    printf("Enter your name: ");
    scanf("%s", &string);

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Hello %s, you are eligible to vote !! \n", string);
    }
    else
    {
        printf("Hello %s, you are not eligible to vote, you'll be able to vote in %d years \n", string, (18-age));
    }

    return 0;
}