#include<iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int n, q;
const int MAXN=1e4;
int main(){
    cin>>n>>q;
    int x[MAXN], y[MAXN], r[MAXN], 
        px[MAXN], py[MAXN];
    double k[MAXN];
    for (int i=0; i<n; i++) {
        cin>>x[i]>>y[i]>>r[i];
    }
    for (int i=0; i<q; i++) {
        cin>>px[i]>>py[i];
        k[i]=(double)py[i]/px[i];
    }

    for (int i=0; i<q; i++) {
        int flag=1;
        for (int j=0; j<n; j++) {
            if ((k[i]*x[j]-y[j])*(k[i]*x[j]-y[j])/(k[i]*k[i]+1) <= r[j]*r[j]) {
                flag=0;
            }
        }
        cout<<((flag)?"Yes":"No")<<endl;
    }
    return 0;
}