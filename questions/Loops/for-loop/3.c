// Calculate sum and average

#include <stdio.h>


int main(){
    int n,i;
    int sum =0;

    printf("Enter the number of your choice: ");
    scanf("%d", &n);

    for(i=n; i>=1; i--)
    {
        sum = sum +i;
    }
     printf("%d \n", sum);
    
     printf("The avearage of these numbers are: %d \n", sum/n);


    return 0;
}