//显示1到n的整数值的二次方
#include <stdio.h>

int main()
{
    int num;
    printf("VALUE of 'n': ");   scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        printf("Square of %d is %d.\n", i, i * i);
    }
    return 0;
}