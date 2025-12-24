#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int a[MAX_SIZE], b[MAX_SIZE], result[MAX_SIZE * 2];
    int lenA = 0, lenB = 0, lenResult = 0;
    char ch;
// 读取
    while (scanf("%d", &a[lenA]) == 1) {
        lenA++;
        if ((ch = getchar()) == '\n') break;
    }
    while (scanf("%d", &b[lenB]) == 1) {
        lenB++;
        if ((ch = getchar()) == '\n' || ch == EOF) break;
    }
// 异或去重
    for (int i = 0; i < lenA; i++) {
        int found = 0;
        for (int j = 0; j < lenB; j++) {
            if (a[i] == b[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            result[lenResult++] = a[i];
        }
    }
    for (int i = 0; i < lenB; i++) {
        int found = 0;
        for (int j = 0; j < lenA; j++) {
            if (b[i] == a[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            result[lenResult++] = b[i];
        }
    }
// 从大到小排序
    for (int i = 0; i < lenResult - 1; i++) {
        for (int j = 0; j < lenResult - i - 1; j++) {
            if (result[j] < result[j + 1]) {
                int temp = result[j];
                result[j] = result[j + 1];
                result[j + 1] = temp;
            }
        }
    }
// 输出
    for (int i = 0; i < lenResult; i++) {
        printf("%d", result[i]);
        if (i < lenResult - 1) printf(" ");
    }
    printf("\n");
    printf("\n田佩宁 202512898\n");
    return 0;
}
