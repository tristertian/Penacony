//Practice 4- 25
//===NUMBER PYRAMID===
#include <stdio.h>

int main()
{
    int num;
    printf("Let's print a reverse pyramid.\n");
    printf("How many tiers do you want it be? ");   scanf("%d", &num);

    int i, j, k;
    for (i = num, k = 1; i >= 1; i--, k++) {
        for (j = 1; j <= num - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= (i - 1) * 2 + 1; j++) {
            printf("%d", k % 10);
        }
        printf("\n");
    }
    return 0;
}