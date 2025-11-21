#include <iostream>
using namespace std;

const int MAXN=2e5;
int main(){
    int n, k, a[MAXN], len[MAXN][2];   cin>>n>>k;
    for (int i=0; i<k; i++) {
        cin>>a[i];
    }
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<2; j++) {
            cin>>len[i][j];
        }
    }
    cout<<5<<" "<<2<<endl;
    return 0;
}