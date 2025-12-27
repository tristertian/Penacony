#include <stdio.h>

int main()
{
    int a,b;

    printf("请输入两个整数，数据之间使用空格隔开。\n");
    scanf("%d%d", &a,&b);

    if (a != b) 
        printf("%d与%d不相等\n", a, b);
    else
        printf("%d与%d相等\n", a, b);

    return 0;
}