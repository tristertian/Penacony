#include <stdio.h>

int main(void)
{
    int x, y;

    printf("请输入整数值。\n");
    printf("整数x=");   scanf("%d", &x);
    printf("整数y=");   scanf("%d", &y);

    printf("x+y=%d, \n", x + y);
    printf("x-y=%d, \n", x - y);
    printf("x*y=%d, \n", x * y);
    printf("x/y=%d,\n",x/y);
    printf("x%%y=%d,\n",x%y);

    return 0;
}