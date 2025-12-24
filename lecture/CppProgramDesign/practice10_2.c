#include <stdio.h>

int sum(const int n){
    int temp = n, ans = 0;
    while (temp != 0) {
        ans += temp%10;
        temp /= 10;
    }
    return ans;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", sum(n));
}