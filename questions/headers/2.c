//Take the radius of cicrle from the user. Calculate and print the area
//and circumference till two decimal place.

#include <stdio.h>
#include <math.h>

int main(){
    int r;
    float pi = 3.1416;
    printf("Enter the radius of your circle: ");
    scanf("%d", &r);

    printf("The area of circle is: %.2f \n", (pi*pow(r,2)));
    printf("The circumference of the circle is %.2f \n", (2*pi*r));

    return 0;
}  