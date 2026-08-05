#include <stdio.h>


int main(){
    int a,b;
    printf ("Enter first number: \n");
    scanf("%d", &a);
    printf ("Enter first number: \n");
    scanf("%d", &b);
    printf( "Sum of two numbers is: %d\n", a+b);
    printf( "Product of two numbers is: %d\n", a*b);
    printf( "Difference of two numbers is: %d\n", a-b);
    printf( "Quotient of two numbers is: %d\n \t and the remainder is %d \n", a/b, a%b);


    return 0;
}
