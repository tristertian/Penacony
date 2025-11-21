#include <stdio.h>

int main()
{
    int sw;

    printf("Integer: ");
    scanf("%d", &sw);

    switch (sw) {
        case 1:printf("A\n");     printf("B\n");        break;
        case 2:printf("C\n");
        case 5:printf("D\n");     break;
        case 6:
        case 7:printf("E\n");         break;
        default:printf("F\n");      break;
    }
    
    return 0;
}