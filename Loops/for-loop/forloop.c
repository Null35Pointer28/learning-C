#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i <= 50; i++)
    {
        // if( i == 11) break;
        if (i== 12) continue;
        printf("%d \n", i);
    }

    return 0;
}