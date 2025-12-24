//没招了，实在写不对

#include <stdio.h>

int main(void)
{
    int start, n;
    if (scanf("%d %d", &start, &n) != 2) return 0;

    int a[20][20];          /* 题目保证 n≤20 */
    int val = start;
    int top = 0, bot = n - 1, left = 0, right = n - 1;

    while (top <= bot && left <= right)
    {
        /* 上横：从左到右 */
        for (int j = left; j <= right; ++j) a[top][j] = val++;
        ++top;

        /* 右竖：从上到下 */
        for (int i = top; i <= bot; ++i) a[i][right] = val++;
        --right;

        /* 下横：从右到左 */
        if (top <= bot)
        {
            for (int j = right; j >= left; --j) a[bot][j] = val++;
            --bot;
        }

        /* 左竖：从下到上 */
        if (left <= right)
        {
            for (int i = bot; i >= top; --i) a[i][left] = val++;
            ++left;
        }
    }

    /* 输出：每行末尾有换行，数字占 4 列右对齐，无多余空格 */
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            printf("%4d", a[i][j]);
        putchar('\n');
    }
    return 0;
}