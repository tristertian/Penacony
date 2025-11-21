#include <stdio.h>
int main (void)
{
    int m, n;

    puts("请输入两个整数。");
    
    printf("整数一："); scanf("%d", &m);
    printf("整数二："); scanf("%d", &n);

    printf("上述数之商为%f。\n", (double) m / n);   /*类型转换，int/int型*/ 

    return 0;
}