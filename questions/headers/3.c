//Take principal, rate, and the time period from user
//Calculate and print  the compound interest

#include <stdio.h>
#include <math.h>

// A = P(1+r/n)^nt

int main(){
    int p, t, n;
    float r, amount, CI;

    printf("Enter principal amount: ");
    scanf("%d", &p);

    printf("Enter time period: ");
    scanf("%d", &t);

    printf("Enter the rate of interest: ");
    scanf("%f", &r);

    printf("Enter the number of times interest is compounded annually: ");
    scanf("%d", &n);

    amount = p * pow(1 + r / (n*100), n * t);
    CI = amount - p;

    printf("The amount is: %f \n", amount);
    printf("The Interest is: %f \n", CI);


    return 0;
}