//Practice 3-10 3-11
#include <stdio.h>

int main()
{
    // int a, b, c;

    // printf("Please type in 3  int. number.\nnum.A: ");
    // scanf("%d", &a);
    // printf("num.B: ");
    // scanf("%d", &b);
    // printf("num.C: ");
    // scanf("%d", &c);

    // if (a == b && b == c) {
    //     printf("All equaled.\n");
    // }else if (a == b || b == c || a == c) {
    //     printf("There are 2 values equaled.\n");
    // }else {
    //     printf("The three values are all different.\n");
    // }

    int a, b, dif;

    printf("Please type in 2 int. number.\nnum.A: ");
    scanf("%d", &a);
    printf("num.B: ");
    scanf("%d", &b);

    if (dif = ((a >= b) ? a-b : b-a), dif <= 10) {
        printf("Their difference is less than or equal to 10.\n%d\n", dif);
    }else {
        printf("Their difference is more than or equal to 11.\n%d\n", dif);
    }
    
    return 0;
}