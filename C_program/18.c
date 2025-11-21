#include <stdio.h>

int main()
{
    int x;

    printf("请输入一个整数：");     scanf("%d", &x);
    
    if (x % 5)
        puts("该数据不可以被5整除");
    else
        puts("该数据可以被5整除");
    return 0;
}