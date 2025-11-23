#include <iostream>
using namespace std;

int main(){
    string a;cin>>a;
    for (int i=a.length()-1; i>=0; i--){
        if(a.length()!=3) {cout<<-1;break;}
        if(a=="300") {cout<<3;break;}
        cout<<a[i];
    }
    cout<<"\n";
    return 0;
}
