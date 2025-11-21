#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN=2e5;
int n, m, q, a[MAXN], p, x;
int main() {
    cin>>n>>m>>q;
    for (int i=1; i<=n; i++) {
        cin>>a[i];
    }
    for (int i=1; i<=q; i++) {
        cin>>p>>x;
        for (int j=p; j<=n; j++) {
            a[j]=m-a[j];
        }
        for (int j=1; j<=n; j++) {
            a[j]+=x;
        }
        sort(a,a+n);
        int ans=0;
        for (int i=2; i<=a[n]; i++){
            for (int j=1; j<=n; j++) {
                if (a[j]%i != 0) {
                    break;
                }
                ans=i;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}