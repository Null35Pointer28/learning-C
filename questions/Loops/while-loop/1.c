//Separate digits and calculate their sum

#include <stdio.h>


int main(){
    int n, i, d, sum = 0;
    printf("Write the number of your choice: ");
    scanf("%d", &n);

    while(n)
    {
        d = n % 10;
        printf("%d \n", d);
        n = n/10;
        sum += d;
    }
    printf("Your final sum id %d: \n", sum);



    return 0;
}