#include <iostream>
using namespace std;

int tree[10000];
int main()
{
    int length, m;
    cin>>length>>m;
    for (int i=0; i<m; i++) {
        int u,v;    cin>>u>>v;
        for (int j=u; j<=v; j++) {
            tree[j] = 1;
        }
    }
    int cnt=0;
    for (int i=0; i<=length; i++) {
        if (tree[i]==0) {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}