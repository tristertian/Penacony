#include <iostream>
using namespace std;

int a[5][5], saddle[5], clm[5];
int main(){
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cin>>a[i][j];
            if (a[i][j]>saddle[i]) {
                saddle[i]=a[i][j], clm[i]=j;
            }
        }
    }
    
    bool found = false;
    for (int i=0; i<3; i++) {
        int flag(0);
        for (int j=0; j<3; j++) {
            if (a[j][clm[i]] < saddle[i]) flag=1;
        }
        if (flag==0) {
            cout<<"Saddle point:a["<<i<<"]["<<clm[i]<<"]="<<saddle[i]<<endl;
            found = true;
        }
    }
    
    if (!found) {
        cout<<"There is no saddle point"<<'\n';
    }
    cout<<"\n田佩宁 202512898\n";
    return 0;
}
