#include <stdio.h>

int digit(int x){
    if (x==0) {
        return 1;
    }
    int temp=(x>0)?x:-x, cnt=0;
    for (; temp!=0; temp/=10) {
        cnt++;
    }
    return (x>0)?cnt:++cnt;
}

char s[20000], method;
int a, b;
int main(){
    int n;  scanf("%d\n", &n);
    for (int i=0; i<n; i++) {
        fgets(s, sizeof(s), stdin);
        if (s[0]=='a' || s[0]=='b' || s[0]=='c') {
            method = s[0], s[0]=' ';
        }
        sscanf(s, "%d%d", &a, &b);

        char _operator;
        int rst;
        switch (method) {
        case 'a':rst=a+b, _operator='+';break;
        case 'b':rst=a-b, _operator='-';break;
        case 'c':rst=a*b, _operator='*';break;
        }
        printf("%d%c%d=%d\n", a, _operator,b, rst);
        printf("%d\n", digit(a)+digit(b)+2+digit(rst));
    }
    return 0;
}