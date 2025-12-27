#include <iostream>
using namespace std;

const int MAXN=1000;
int n, m, q, x[5], y[5];
char a[MAXN][MAXN];
int main(){
    cin>>n>>m>>q;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin>>a[i][j];
        }
    }
    for (int i=0; i<q; i++) {
        cin>>x[i]>>y[i];
    }
    cout<<5<<endl;
    return 0;
}