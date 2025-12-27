#include <stdio.h>

int main()
{
    int num;
    printf("Please type in a positive int..\n");
    scanf("%d", &num);

    int t = 1;
     while (t <= num) {
        // putchar(t % 2 ? '+' : '-');
        printf("*\n");
        t++;
     }
    //if (num >= 0) printf("\n");
    return 0;
}