//求1到n的值
#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("value of 'n': ");   scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += i;
    }
    printf("SUM of 1 to %d is %d.\n", n, sum);
    return 0;
}