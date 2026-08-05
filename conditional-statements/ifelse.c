#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks >= 33)
    {
        printf("You have PAASED successfully!! \n");
    }else{
        printf("You have FAILED, try again \n");
    }

    return 0;
}