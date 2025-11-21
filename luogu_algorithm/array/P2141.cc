#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN=110;
int a[MAXN], flag[MAXN];

int main(){
    int n;  cin>>n;
    int cnt=0;
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(a,a+n);
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            for (int k=j+1; k<n; k++) {
                if (a[k]==a[i]+a[j] && !flag[k]) {//某些数有多个加和方式，注意去掉重复情况
                    cnt++;
                    flag[k]=1;
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}