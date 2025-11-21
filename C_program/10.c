#include <stdio.h>

int main(void)
{
    int result;
    printf("请输入一个整数：");   scanf("%d", &result);
    printf("该数字最后一位数为%d。\n", result%10);
    
    return 0;
}