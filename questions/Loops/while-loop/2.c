//Take a number and reverse its input

#include <stdio.h>


int main(){
    long int n,s, rev = 0;
    printf("Write the number of your choice: ");
    scanf("%ld", &n);

    while(n)
    {
        s = n % 10;
        n = n/10;

        rev = rev*10 + s;
    }

    printf("This number, when reversed, will be: %ld \n", rev);


    return 0;
}