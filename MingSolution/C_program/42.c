//Practice 4-16 显示输入整数以下的所有奇数值
#include <stdio.h>

int main()
{
    int num;
    printf("int. num.: ");   scanf("%d", &num);
    for (int i = 1; i <= num; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}