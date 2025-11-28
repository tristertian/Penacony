#include <stdio.h>

int main()
{
    int cnt[26] = {0};
    int c;
    int maxCnt = 0;

    /* 1. 统计小写字母出现次数 */
    while ((c=getchar()) != EOF) {
        if (c >= 'a' && c <= 'z')
            cnt[c - 'a']++;
    }

    /* 2. 找出最大值，确定柱状图高度 */
    for (int i = 0; i < 26; i++)
        if (cnt[i] > maxCnt) maxCnt = cnt[i];

    /* 3. 从高到低打印柱状图 */
    for (int h = maxCnt; h > 0; h--) {
        for (int i = 0; i < 26; i++) {
            putchar(cnt[i] >= h ? '*' : ' ');
        }
        putchar('\n');
    }

    /* 4. 最后一行输出 26 个字母 */
    for (int i = 0; i < 26; i++)
        putchar('a' + i);
    putchar('\n');

    return 0;
}