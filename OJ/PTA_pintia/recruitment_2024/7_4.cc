#include <iostream>
#include <string>
using namespace std;

int n;
string s, think="think";
int main(){
    cin>>n>>s;
    int temp, cnt=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<5; j++) {
            if (s[i]==think[j]) {
                temp=j;
                break;
            }
        }
        break;
    }
    for (int i=0; i<n; i++) {
        if (think[temp%5]==s[i]) {
            cnt++, temp++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}