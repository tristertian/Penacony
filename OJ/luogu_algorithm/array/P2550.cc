#include <iostream>
using namespace std;

int cnt[1000], ans[7], lottery[1000][8];//lottery[0] is jackpot.

int main(){
    int n;  cin>>n;
    for (int i=0; i<=n; i++) {
        for (int j=1; j<=7; j++) {
            cin>>lottery[i][j];
        }
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=7; j++) {
            for (int k=1; k<=7; k++) {
                if (lottery[i][j]==lottery[0][k]) {
                    cnt[i]++;
                }
            }
        }
        ans[cnt[i]]++;
    }
    for (int i=7; i; i--) {
        cout<<ans[i]<<((i==1)?'\n':' ');
    }
    return 0;
}