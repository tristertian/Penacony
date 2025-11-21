#include <iostream>
using namespace std;

const int MAXN=25;
int a[MAXN][MAXN];
int main(){
    int n;  cin>>n;
    for (int i=1; i<=n; i++) {
        a[i][1] = a[i][i] = 1;
        for (int j=2; j<i; j++) {
            a[i][j] = a[i-1][j]+a[i-1][j-1];
        }
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; a[i][j]; j++) {
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}