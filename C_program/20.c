//Practice 3-3
#include <stdio.h>

int main()
{
    double x;

    printf("Please type in a number: \n");
    scanf("%lf", &x);

    // if (x >= 0)
    //     printf("该实数的绝对值是%f\n", x);
    // else
    //     printf("该实数的绝对值是%f\n", -x);
    
    printf("%-20.10f is the absolute number of %-20.10f.\n", (x >= 0) ? x : -x, x);

    return 0;
}