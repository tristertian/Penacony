//PRACTICE 4-24 PYRAMID
#include <stdio.h>

int main()
{
    int num;
    printf("Let's print a pyramid.\n");
    printf("How many tiers do you want it to be: ");   scanf("%d", &num);

    int i, j;
    for (i = 1; i <= num; i++) {
        for (j = 1; j <= num - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= (i - 1) * 2 + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}