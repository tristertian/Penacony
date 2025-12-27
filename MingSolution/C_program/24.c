#include <stdio.h>

int main()
//Practice 3-6(还可以采用五个未知数的方法，两两分组)
// {
//     double x, y, z, min;

//     printf("Type in 3 numbers,inserting blangks between numbers.\n");
//     scanf("%lf%lf%lf", &x, &y, &z);

//     min = x;

//     if (y < x) {
//         if (z < y) min = z;
//         else min = y;
//     }
//     else if (z < x) min = z;    //哟西哟西

//     printf("%f is the minimum num..\n", min);

//     return 0;
// }
//Practice 3-7(六未知数法)
{
    int n1, n2, n3, n4, m, k, max;

    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);
    if (n1 < n2)
        m = n2;
    else
        m = n1;
    if (n3 < n4)
        k = n4;
    else
        k = n3;
    if (m < k)
        max = k;
    else
        max = m;

    printf("%d is the maximum num..\n", max);
    return 0;
}