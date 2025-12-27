#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN=2050;
int n, k, x, a[MAXN];
int main() {
    cin>>n>>k>>x;
    for (int i=1; i<=n; i++) {
        cin>>a[i];
    }
    int ans=0, cnt=1;
    for (int i=1; i<=n; i++) {
        a[n+i]=k+cnt*x, cnt++;
    }
    sort(a,a+2*n);
    for (int i=1; i<=n; i++) {
        ans+=a[i];
    }
    cout<<ans;
    return 0;
    // int ans=0, cnt=1;
    // for (int i=1; i<=n; i++) {
    //     if (a[i]<=(k+cnt*x)) {
    //         ans+=a[i];
    //     }else {
    //         ans+=(k+cnt*x);
    //     }
    // }
    // cout<<ans<<endl;
}