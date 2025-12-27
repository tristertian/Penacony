//九九乘法表
#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 9; i++) {               //纵方向循环
        for (j = 1; j <= 9; j++) {           //横方向循环
            printf("%-3d", i * j);
            //if (i * j > 40)   break;       //用break语句强制结束循环
        }                                    //{}中间为一个程序块（block）
        printf("\n");
    }
    return 0;
}