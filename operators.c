#include <stdio.h>


int main(){
    int a =10;
    char c;
    float b;
    double d;
    int v[] = {1,2,3,4,5};
    // printf("%d \n", a--);
    // printf("%d \n", a);
    // printf("%d \n", --a);
    printf("Size of int: %d \n", sizeof(a));
    printf("Size of float: %d \n", sizeof(b));
    printf("Size of char: %d \n", sizeof(c));
    printf("Size of double: %d \n", sizeof(d));
    printf("Size of array: %d \n", sizeof(v));

    return 0;
}