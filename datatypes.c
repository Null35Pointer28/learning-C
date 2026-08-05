#include <stdio.h>

int a;
char ch;
int main(){
    // int num =12;
    // long l = 2323;
    // char ch = 'a';
    // float f = 1.2;
    // double x = 1.445; // increases digits after decimal point
    // void will be discussed later

    printf("Enter an integer value: ");
    scanf("%d", &a);
    printf("Enter a character value: ");
    scanf(" %c", &ch); //buffer problem 'can also be solved with "getchar();" in b/w the lines'

    printf("character = %c, integer = %d\n", ch, a);

    return 0;
}