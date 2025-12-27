//用*绘制长方形
    // #include <stdio.h>

    // int main()
    // {
    //     int i, j, height, width;

    //     printf("Let's draw a square.\n");
    //     printf("HEIGHT: ");   scanf("%d", &height);
    //     printf("WIDTH: ");    scanf("%d", &width);

    //     for (i = 1; i <= height; i++) {
    //         for (j = 1; j <= width; j++) {
    //             printf("*");
    //         }
    //         printf("\n");
    //     }
    //     return 0;
    // }

//绘制等腰直角三角形（多重循环）
//左下
    // #include <stdio.h>

    // int main()
    // {
    //     int i, j,lenth;
    //     printf("Print an isosceles right triangle that right-angle is on the lower-left.\n");
    //     printf("========================================================================\n");

    //     printf("Short lenth: ");   scanf("%d", &lenth);

    //     for (i = 1; i <= lenth; i++) {
    //         for (j = 1; j <= i; j++) {
    //             printf("* ");
    //         }
    //         printf("\n");
    //     }
    //     return 0;
    // }
//右下
    // #include <stdio.h>

    // int main()
    // {
    //     int i, j,lenth;
    //     printf("Print an isosceles right triangle that right-angle is on the lower-right.\n");
    //     printf("========================================================================\n");

    //     printf("Short lenth: ");   scanf("%d", &lenth);

    //     for (i = 1; i <= lenth; i++) {             //外循环（控制纵循环）
    //         for (j = 1; j <= lenth - i; j++) {
    //             printf("  ");
    //         }
    //         for (j = 1; j <= i ; j++) {
    //             printf(" *");
    //         }
    //         printf("\n");
    //     }
    //     return 0;
    // }
//左上
    // #include <stdio.h>

    // int main()
    // {
    //     int lenth;
    //     printf("Print an isosceles right triangle that right-angle is on the higher-left.\n");
    //     printf("========================================================================\n");

    //     printf("Short lenth: ");   scanf("%d", &lenth);

    //     for (int i = lenth; i >= 1; i--) {
    //         for (int j = 1; j <= i; j++) {
    //             printf("* ");
    //         }
    //         printf("\n");
    //     }
    //     return 0;
    // }
//右上
#include <stdio.h>

int main()
{
    int i, j,lenth;
    printf("Print an isosceles right triangle that right-angle is on the higher-right.\n");
    printf("========================================================================\n");

    printf("Short lenth: ");   scanf("%d", &lenth);

    for (i = lenth; i >= 1; i--) {             //外循环（控制纵循环）
        for (j = 1; j <= lenth - i; j++) {
            printf("  ");
        }
        for (j = 1; j <= i ; j++) {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}