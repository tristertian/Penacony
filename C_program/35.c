//输入一个非负整数并逆向显示
#include <stdio.h>

int main(void)
{
    int no, tem;

    do {
        printf("Please type in a positive int.:");  scanf("%d", &no);
        tem = no;
        if (no <= 0)    printf("\aDon't type in a non-positive int..\n");
    }while (no <= 0);

    printf("The reverse display result of %d is ", tem);
    while (no > 0) {
        printf("%d", no % 10);  
        no /= 10;
    }
    printf(".\n");

    return 0;
}