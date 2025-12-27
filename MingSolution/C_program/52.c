//九九乘法表 continue语句
#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 9; i++) {               //纵方向循环
        for (j = 1; j <= 9; j++) {           //横方向循环
            int seki = i * j;
            if (seki % 10 == 4 || seki / 10 == 4) {
                printf("   ");
                continue;                    //continue语句执行，跳过了下一个printf语句
            }
            printf("%-3d", seki);
        }                                    //{}中间为一个程序块（block）
        printf("\n");
    }
    return 0;
}