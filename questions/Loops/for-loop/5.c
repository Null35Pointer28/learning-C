// Factors of a number

/*
    n%i == 0
    printf i, 

*/

#include <stdio.h>


int main(){
    int n, i;
    printf("Enter the number whose factors you want: ");
    scanf("%d", &n);
    printf("the factors of %d are: \n", n);

    for (i = 1; i<=n ; i++)
    {
        if(n%i == 0)
        {
            printf("%d, ", i);
        }
    }


    return 0;
}