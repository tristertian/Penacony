//Practice 3-4
#include <stdio.h>

int main()
{
    int x,y;

    printf("请输入两个自然数。\n整数A：");      scanf("%d", &x);
    printf("整数B：");      scanf("%d", &y);

//    if(x == y)
//        puts("A等于B");
//    else if(x > y)
//            puts("A大于B");
//    else if(x < y)
//            puts("A小于B");
if (x > 0) {
    if (x == 0)
        printf("%d等于0\n", x);
    else
        printf("%d大于0\n", x);
}   else {
        printf("%d不是自然数\n", x);
}

if (y > 0) {
    if (y == 0)
        printf("%d等于0\n", y);
    else
        printf("%d大于0\n", y);
}   else {
        printf("%d不是自然数\n", y);
}
    return 0;
}