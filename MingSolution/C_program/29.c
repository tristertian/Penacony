#include <stdio.h>

int main()
{
    int hand;

    do {
    printf("Choose your hand: [STONE...0/SISSORS...1/cLOTHE...2]");
    scanf("%d", &hand);
    }while (hand < 0 || hand > 2);//!(hand >= 0 && hand <= 2)

    printf("Your choice is: ");
    switch (hand) {
        case 0:printf("STONE\n"); break;
        case 1:printf("SISSORS\n"); break;
        case 2:printf("CLOTHE\n");  break;
    }

    return 0;
}