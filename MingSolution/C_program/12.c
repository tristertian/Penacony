#include <stdio.h>

int main()
{
    int a ,b;

    puts("请在下方输入两个整数，整数值之间用空格隔开。");
    scanf("%d%d",&a, &b);   //格式化输入千万不要忘了&，先读取再存储

    //printf("%d的值是%d的%d%%\n" , a, b, a * 100 / b);   //仅使用int数据类型
    printf("%d是%d的%f%%。\n", a, b, (double)a/b*100);    //使用数据类型转换 int-->double
    
    return 0;
}