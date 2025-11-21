#include <stdio.h>

int main()
{
    int a,b;

    puts("请输入两个整数。");
    printf("将a与b的值依次输入，中间使用空格隔开：");
    scanf("%d%d", &a, &b);
    
    printf("a除以b商%d余%d。\n", a/b, a%b);
    return 0;
}