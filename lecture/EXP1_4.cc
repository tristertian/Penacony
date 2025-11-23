#include <iostream>
using namespace std;

int sum(string a){
    int ans(0);
    for(int i=0; i<(int)a.length(); i++){
        ans += (a[i]-'0');
    }
    return ans;
}

int main(){
    string n;  cin>>n;
    cout<<sum(n);
    return 0;
}
