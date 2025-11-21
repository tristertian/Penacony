#include <iostream>
using namespace std;

long long cnt[10];
int main(){
    int m, n;   cin>>m>>n;
    for (long long i=m; i<=n; i++) {
        long long temp=i;
        for (; temp; ) {
            cnt[temp%10]++;
            temp/=10;
        }
    }

    for (int i=0; i<10; i++) {
        cout<<cnt[i]<<((i==9)?'\n':' ');
    }
    return 0;
}