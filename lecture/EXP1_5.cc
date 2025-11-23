#include <iostream>
using namespace std;

int fac(int n){
    if(n>0){
        return n*fac(n-1);
    }else{
        return 1;
    }
}

int main(){
    int n;  cin>>n;
    cout<<fac(n);
    cout<<"\n田佩宁 202512898\n";
    return 0;
}
