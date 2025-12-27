#include <stdio.h>

int main()
{
    int retry;

    do {
        int no;
        printf("Please type in an integer.\n"); scanf("%d", &no);

        if (no % 2)
            printf("It is an uneven number.\n");
        else
            printf("It is an even number.\n");
        printf("Need repeat? [Yes...0 / No...9]: ");    scanf("%d", &retry);
    }while (retry == 0);

    return 0;
}