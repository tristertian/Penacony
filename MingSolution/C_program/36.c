//显示整数位数
#include <stdio.h>

int main()
{
    int no, i=0;
    do {
        printf("Please type in a positive int.:");  scanf("%d", &no);
        if (no <= 0)    printf("Donnot type in a non-positive number.\n");
    }while(no <= 0);


    printf("Digit of %d is ", no);
    // while (no > 0) {
    //     i++;    no /= 10;
    // }
    for (i = 0; no > 0;i++,no /= 10) {
    }
    printf("%d.\n", i);
    return 0;
}