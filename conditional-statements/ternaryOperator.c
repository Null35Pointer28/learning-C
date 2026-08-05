#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    printf("%s \n", (marks >= 33) ? "You have Passed" : "You have Failed");

    return 0;
}