#include <iostream>
using namespace std;

const int MAXN=1000;
int n;
string input, num, cap, low;
int main() {
    ios::sync_with_stdio(false);
    cin>>n>>input;
    for (int i=0; i<n; i++) {
        if (input[i]>='0' && input[i]<='9') {
            num+=input[i];
        }else if (input[i]>='A' && input[i]<='Z') {
            cap+=input[i];
        }else {
            low+=input[i];
        }
    }
    cout<<num<<cap<<low<<endl;
}