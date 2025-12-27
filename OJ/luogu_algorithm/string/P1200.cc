#include <iostream>
#include <string>
using namespace std;

int mult(string str){
    int product=1;
    for (int i=0; i<str.length(); i++) {
        product*=(str[i]-'A'+1);
    }
    return product;
}

string comet, group;
int main(){
    cin>>comet>>group;
    if (mult(comet)%47 == mult(group)%47) {
        cout<<"GO"<<endl;
    }else {
        cout<<"STAY"<<endl;
    }
    return 0;
}