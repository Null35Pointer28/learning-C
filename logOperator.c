#include <stdio.h>


int main(){
    int a =200, b = 100, c = 50;

    printf("%d \n", a>b);
    printf("%d \n", b>a);
    printf("%d \n", b==2*c);
    printf("%d \n", (a>b && b>c));
    printf("%d \n", (a>b && c>b));
    printf("%d \n", (a>b || c>b));


    return 0;
}