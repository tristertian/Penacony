#include <stdio.h>
#include <string.h>

#define MAXN 15
int n;
int matrixA[MAXN][MAXN], matrixB[MAXN][MAXN], answer[MAXN][MAXN];

int main(){
    scanf("%d", &n);   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }
    memset(answer, 0, sizeof(answer));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                answer[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%10d", answer[i][j]);
        }
        putchar('\n');
    }
}