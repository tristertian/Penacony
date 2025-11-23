#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    long long a(0);int b(0);
    int temp(1);
    for (int i=0; i<n; i++){
        a+=100000, b+=temp, temp*=2;
    }
    cout<<a<<"\n"<<b<<"\n";
    cout<<"\n田佩宁 202512898\n";
    return 0;
}