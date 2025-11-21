#include <stdio.h>

int main()
{
    double a, b;

    puts("请在下方输入两个两位小数，数值之间用空格隔开。");
    scanf("%lf%lf", &a, &b);

    printf("%f是%f的%f%%\n", a, b, a/b);
    
    return 0;
}