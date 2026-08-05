#include <stdio.h>

int a, b, temp;
int rev(){
    temp = a;
    a = b;
    b = temp;
}

int main(){
    printf("Enter your first number: ");
    scanf("%d", &a);
    printf("Enter your second number: ");
    scanf("%d", &b);

    rev();
    printf("Reversed numbers are:\na=%d \nb=%d \n", a, b);


    return 0;
}