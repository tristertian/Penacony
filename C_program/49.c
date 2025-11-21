//Practice 4-22
#include <stdio.h>

int main()
{
    int a, b;
    printf("Let't print a rectangle.\n");
    printf("Lenth: ");   scanf("%d", &a);
    printf("Another Lenth: ");   scanf("%d", &b);

    for (int i = 1; i <= ((a < b) ? a : b); i++) {
        for (int j = 1; j <= ((a < b) ? b : a); j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}