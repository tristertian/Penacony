//First: transpose that 2D-array.
//Then: print in j-i order.
#include <stdio.h>
#include <string.h>

int main(){
    char str[100], tabel[30][30];
    int cnt[30];
    memset(str, '\0', sizeof(str));
    memset(tabel, '\0', sizeof(tabel));
    memset(cnt, 0, sizeof(cnt));
    for (int i=0; i<26; i++) {tabel[i][0]='a'+i;}           //initialization
    
    while (scanf("%s", str)) {}

    for (int i=0; i<(int)sizeof(str); i++) {
        if (str[i]>='A' && str[i]<='Z') {
            str[i] += 'a'-'A';
        }
        if (str[i]!='\0') {
            cnt[str[i]-'a']++;
        }
    }                                                       //static count
    for (int i=0; i<26; i++) {
        for (int j=0; j<cnt[i]; j++) {
            tabel[i][j]='*';
        }
    }                                                       //fill'*'signs
    int all_zero_clm = 0;
    for (int i=0; i<(int)sizeof(tabel[0]); i++) {
        int flag=0;
        for (int j=0; j<26; j++) {
            if (tabel[j][i] != '\0') {
                flag=1;
            }
        }
        if (flag==0) {break;}
        all_zero_clm++;
    }                                                       //find end line
    for (int i=0; i<all_zero_clm; i++) {
        for (int j=0; j<26; j++) {
            printf("%c", tabel[j][i]);
        }
        printf("\n");
    }                                                       //print
}
