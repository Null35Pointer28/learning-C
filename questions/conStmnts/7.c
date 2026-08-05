// WAP that takes an initial amount as input and calculates the final amount
// after applying a flat discount based on the following conditions

/*
AMOUNT          DISCOUNT
0-5000              0%
5001 - 7000         5%
7001 - 9000         10%
> 90001             20%
*/

#include <stdio.h>
int expen;
float discount, FinAmt;

int main()
{
    printf("Enter the amount spent: ");
    scanf("%d", &expen);

    if (expen >= 0 && expen <= 5000)
    {
        discount = 0;
    }
    else if (expen >= 5001 && expen <= 7000)
    {
        discount = 5.00 / 100.00;
    }
    else if (expen >= 7001 && expen <= 9000)
    {
        discount = 10.00 / 100.00;
    }
    else if (expen >= 9001)
    {
        discount = 20.00 / 100.00;
    }

    FinAmt = expen - discount * expen;
    printf("Your final amount on expenditure of Rs.%d is \nRs.%.2f \n", expen, FinAmt);

    return 0;
}