// Take length and breadth of a rectangle from the user. Calculate and
// print the area and perimeter.

#include <stdio.h>


int main(){
    int length, breadth;

    printf("Enter the lenth of your rectangle in cms: ");
    scanf("%d", &length);

    printf("Enter the breadth of your rectangle in cms: ");
    scanf("%d", &breadth);

    printf("The area of your rectangle is: %d \n", (length * breadth));
    printf("The perimeter of your rectangle is: %d \n", (2*(length + breadth)));


    return 0;
}