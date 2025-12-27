//求多个整数的和及其平均值
#include <stdio.h>

int main()
{
    int sum = 0, cnt = 0, retry;

    do {
        int t;
        printf("Please type in an integer: ");
        scanf("%d", &t);
        sum += t;  cnt++ ;

        printf("Add more or not? [YES...0/no...9]");
        scanf("%d", &retry);
    }while (retry == 0);
    printf("sum %d\navg %.2f\n", sum, (double)sum / cnt);
    return 0;
}