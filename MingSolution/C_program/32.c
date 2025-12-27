#include <stdio.h>

int main()
{
    int no;
    
    printf("Please type in a positive integer.\n ");
    scanf("%d", &no);

    //数据递减
    // while (no >= 1) {
    //     printf("%d ", no--);
    // }
    // if ((no + 1) >= 0)
    //     printf("\n");

    //数据递增
    // int i = 1;
    
    // while (i <= no) {
    //     printf("%d ", i++);
    // }
    // if (no >= 0)
    //     printf("\n");

    //升序显示小于输入值的正偶数
    int i = 1;

    while ((i * 2) <= no) {
        printf("%d ", i *= 2);
    }
    printf("\n");
    return 0;
}