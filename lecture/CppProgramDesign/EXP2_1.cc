#include <iostream>
using namespace std;

int a[100], flag;
int main(){
    for (int i=0; i<=100; i++){
        cin>>a[i];
        if (a[i]==0) {
            flag=i; break;
        }
    }
    for (int i=flag-1; i>=0; i--){
        cout<<a[i]<<(i==0 ? '\n' : ' ');
    }
    cout<<"\n田佩宁 202512898\n";
}
