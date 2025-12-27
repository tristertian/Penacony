#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN=5e5;
int n, a[MAXN], b[MAXN], ans;
int main(){
    cin>>n;
    for (int i=0; i<n; i++) cin>>a[i];
    for (int i=0; i<n; i++) cin>>b[i];

    int cnt=0;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if ((a[i]+a[j])%(b[i]+b[j])==0) {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}