#include <iostream>
#include <cstring>
using namespace std;

void itob(int n, string&s, int b){
    int b_num[100], len(0); memset(b_num, 0, sizeof(b_num));
    if (n<0) {
        cout<<'-', n=-n;
    }
    for (int i=1; n!=0; i++, len++) {
        b_num[i] = n%b, n/=b;

        if(b_num[i]>=0 && b_num[i]<=9){
            s[i] = b_num[i]+'0';
        }else {
            s[i] = b_num[i]+'a';
        }
    }
    for (int i=len; i>=1; i--) {
        cout<<s[i];
    }
    cout<<'\n';
}

int main(){
    int n, b;   cin>>n>>b;
    string s;
    itob(n, s, b);
    cout<<"\n田佩宁 202512898\n";
}
