// Greedy algorithm may be incorrect.
// It should be resolved by serach&dynamic assignment.
#include <algorithm>
#include <iostream>
using namespace std;

bool cmp(int a,int b) {
    return (a>b);
}

const int MAXN=2e5;
int N, M, a[MAXN];
int main() {
    ios::sync_with_stdio(false);

    cin>>N>>M;
    for (int i=0; i<N; i++) {
        cin>>a[i];
    }
    sort(a,a+N,cmp);
    int ans=0, temp=M;
    for (int i=0; i<N; i++) {
        for (; a[i]>=a[i+1]; ) {
            if (temp==0) break;
            ans+=a[i], temp--, a[i]--;
        }
    }
    cout<<ans<<'\n';
    return 0;
}