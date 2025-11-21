#include <stdio.h>

int main(void)
{
    int n1,n2;
    int mewo;

    puts("请输入两个整数。");
    printf("整数1："); scanf("%d",&n1);
    printf("整数2："); scanf("%d",&n2);

    mewo = n1 + n2;

    printf("上述两数之和为%d。\n",mewo);

    return 0;
}