//输入规定个数个整数，并显示其合计值与平均值（for循环）
#include <stdio.h>

int main()
{
    int sum = 0, i = 1;
    int tem, num;
        printf("How many number do you want to culculate: ");   scanf("%d", &num);
    for (; i <= num; i++) {
        printf("No.%d: ", i); scanf("%d", &tem);
        sum += tem;
    }
    printf("SUM: %d\nAVG: %.2f\n", sum, (double)sum / num);
    return 0;
}