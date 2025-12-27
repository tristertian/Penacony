#include <iostream>
using namespace std;

const int MAXN=4e5;
int n, m, k, a[MAXN];
int main(){
    int cnt=0;
    cin>>n>>m>>k;
    for (int i=0; i<n; i++) {
        cin>>a[i];
        if (a[i]==1) {
            cnt++;
        }
    }

    int temp=0, last;
    for (int i=n-1; i>n-k-1; i--) {
        if (a[i]==1) {
            temp++;
        }
    }
    if ((m-k+temp)%(k+1)) {
        last = (k-temp)+((m-(k-temp))/(k+1)*k)+(m-(k-temp))%(k+1)-1;
    }else {
        last = (k-temp)+((m-(k-temp))/(k+1)*k);
    }
    cnt+=last;
    cout<<cnt<<endl;
    return 0;
}