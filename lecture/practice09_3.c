#include <stdio.h>

#define MAX 20

int a[MAX][MAX];

int main(void) {
    int start, n;
    if (scanf("%d %d", &start, &n) != 2) return 0;

    int left = 0, right = n - 1, top = 0, bottom = n - 1;
    int num = start;

    while (left <= right && top <= bottom) {
        /* 上边：从左到右 */
        for (int j = left; j <= right; ++j) a[top][j] = num++;
        ++top;

        /* 右边：从上到下 */
        for (int i = top; i <= bottom; ++i) a[i][right] = num++;
        --right;

        /* 下边：从右到左 */
        if (top <= bottom) {
            for (int j = right; j >= left; --j) a[bottom][j] = num++;
            --bottom;
        }

        /* 左边：从下到上 */
        if (left <= right) {
            for (int i = bottom; i >= top; --i) a[i][left] = num++;
            ++left;
        }
    }

    /* 输出：每个数字占 4 位，右对齐，无额外空格 */
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            printf("%4d", a[i][j]);
        putchar('\n');
    }
    return 0;
}