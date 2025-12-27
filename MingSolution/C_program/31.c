//Practice 4-2 计算两个整数之间所有整数的和
#include <stdio.h>

int main()
{
    int a, b, sum = 0;
    printf("Please type in 2 integer.\nint. A: ");
    scanf("%d", &a);
    printf("int. B: "); scanf("%d", &b);

    int start, end;
    start = (a<b)?a:b; end = (a<b)?b:a;

    do {
        sum = sum + start;  
        start++;
    }while (start <= end);

    printf("SUM of number between %d and %d is %d.\n", (a<b)?a:b, (a<b)?b:a, sum);
    
    return 0;
}