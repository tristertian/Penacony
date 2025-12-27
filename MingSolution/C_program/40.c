//显示身高与标准体重对照表
#include <stdio.h>

int main()
{
    int start, end, tolerance;
    printf("STANDARD BODY H&W COMPARISON TABLE\n===================================\n");
    do {
        printf("start value(cm): ");        scanf("%d", &start);
        printf("end value(cm): ");          scanf("%d", &end);
        printf("tolerance value(cm): ");    scanf("%d", &tolerance);
        if (start > end)   printf("invalid value.type in again.\n");
    }while (start > end);

    double weight;
    for (; start <= end; start += tolerance, weight = (start - 100) * 0.9) {
        printf("%dcm   %.2fkg\n", start, weight);
    }
    return 0;
}