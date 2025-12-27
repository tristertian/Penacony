#include <stdio.h>

int main()
{
    int n1, n2, max;

    printf("Please type in 2 integer.\n");
    printf("int. 1:");     scanf("%d", &n1);
    printf("int. 2:");     scanf("%d", &n2);

//    if (n1 > n2) {
//        max = n1;
//    }
//    else {
//    max = n2;
//    }

    // max = (n1 > n2) ? n1 : n2;      //将较大的值赋给变量max
    
    printf("%d is the diferrence between 2 num..\n", (n1 >n2) ? (n1-n2) : (n2-n1));

    return 0;
}