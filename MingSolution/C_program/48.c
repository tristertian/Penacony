//Practice 4-21
#include <stdio.h>

int main()
{
    int num;
    printf("Print a square.\n");
    printf("Type in how many tier(s) it has: ");   scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            printf("* ");
            if (j >= 20)   break;
        }
        printf("\n");
        if (i >= 20)   break;
    }
    return 0;
}