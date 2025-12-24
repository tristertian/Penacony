#include <stdio.h>
#include <string.h>

int main(){
    int sqr[20][20], n;
    memset(sqr, 0, sizeof(sqr));
    scanf("%d", &n);
    int core=n-1;
    for (int i=n,shift=0; i>0; i--,shift++) {
            for (int k=0; k<n*2-1; k++) {
                sqr[core+shift][k] = i;
                sqr[core-shift][k] = i;
                sqr[k][core+shift] = i;
                sqr[k][core-shift] = i;
            }   
    }
    for (int i=0; i<n*2-1; i++) {
        for (int j=0; j<n*2-1; j++) {
            printf("%d", sqr[i][j]);
        }
        printf("\n");
    }
}