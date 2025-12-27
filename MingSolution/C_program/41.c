//显示约数
#include <stdio.h>

int main()
{
    int i, n, c;

    printf("Type in an integer,then display its divisors.\n");
    scanf("%d", &n);

    for (i = 1, c = 0; i <= n; i++) {
        if (n % i == 0){
            printf("%d ", i);
            c++;
        }
    }
    printf("\nAll %d divisors.\n", c);
    return 0;
}