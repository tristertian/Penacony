//Chapter 4 Summary
#include <stdio.h>

int main()
{
    int i, j;    int x, y, z;

    do {
        printf("Number between 0 to 100: ");    scanf("%d", &x);
        if (!(x >= 0 && x <= 100)) printf("Invalid words.\n");
    }while (!(x >= 0 && x <= 100));

    y = x; z = x;

    while (y >= 0) {
        printf("%d %d\n", y--, ++z);
    }

    printf("Lenth of rectangle with "
        "integral weight&height and %d area is: \n", x);
    for (i = 1; i < x; i++) {
        if (i * i > x) break;
        if (x % i != 0) continue;
        printf("%d × %d\n", i, x / i);
    }
    printf("* of 5 rows & 7 columns\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 7; j++) {
        printf("* ");
    }
        putchar('\n');
    }
    return 0;
}