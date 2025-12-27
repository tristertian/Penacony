//Practice 4-18 显示整数值个“*”，并且每显示5个就换行
#include <stdio.h>

int main()
{
    int num, i;
    printf("int. num.: ");   scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        putchar('*');
        if (i % 5 == 0)   putchar('\n');
    }
    printf("\n");
    return 0;
}