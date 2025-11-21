//Practice 4-14
#include <stdio.h>

int main()
{
    int num, i;
    printf("Please type in an integer: ");  scanf("%d", &num);
    
    for (i = 1; i<= num; i++) {
        printf("%d", i % 10);
    }
    printf("\n");
    return 0;
}