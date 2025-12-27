#include <stdio.h>

int main()
{
    int no;
    printf("Positive num.: ");
    scanf("%d", &no);

    while (no-- > 0) {
        putchar('*');
    }
    if ((no + 1) >= 0) putchar('\n');

    return 0;
}