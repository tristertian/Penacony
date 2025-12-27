#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    if (n<=1) {
        return 0;
    }
    for (int i=2; i<=sqrt(n); i++) {
        if (n%i==0) {
            return 0;
        }
    }
    return 1;
}

string s;
int maxn, minn, c[26];
int main(){
    cin>>s;
    for (int i=0; i<s.length(); i++) {
        c[s[i]-'a']++;
    }
    maxn=0, minn=s.length();
    for (int i=0; i<26; i++) {
        if (c[i]>maxn) {
            maxn=c[i];
        }
        if (c[i]<minn && c[i]) {
            minn=c[i];
        }
    }
    int diff=maxn-minn;
    if (isPrime(diff)) {
        cout<<"Lucky Word\n"<<maxn-minn<<endl;
    }else {
        cout<<"No Answer\n"<<0<<endl;
    }
    return 0;
}