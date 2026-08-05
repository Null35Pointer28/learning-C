#include <stdio.h>
#include<math.h>

int main(){
    int a = 2,  b = 3, c = 8;
    float d, e, f;

    d = pow (a, b);
    printf("%.2f \n",d);

    e = sqrt(c);
    printf("%.2f \n",e);

    printf("Floor = %.3lf \n", floor(8.9));
    printf("Ceil = %.3lf \n", ceil(8.9));
    printf("Rounded off = %.1f \n", round(8.3));
    


    return 0;
}