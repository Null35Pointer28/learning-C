//FILM RATING ANALYZER

#include <stdio.h>


int main(){
    float rating;
    char str[100];

    printf("Enter the name of your movie: ");
    scanf("%s", &str);

    printf("Enter the rating of your movie: ");
    scanf("%f", &rating);

    if(rating >= 0.0 && rating <= 2.0)
    {
        printf("%s is a flop movie \n", str);
    }
   else  if(rating >= 2.1 && rating <= 3.4)
    {
        printf("%s is a Semi hit movie \n", str);
    }
    else if(rating >= 3.5 && rating <= 4.5)
    {
        printf("%s is a hit movie \n", str);
    }
    else if(rating >= 4.6 && rating <= 5.0)
    {
        printf("%s is a superhit movie \n", str);
    }
    else
    {
        printf("INVALID rating!!! \n");
    }


    return 0;
}