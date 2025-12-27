#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

string input;
int a[100], temp;

void trans(string str,int a[],int num,int&temp) {
    if (input.find(str)!=string::npos) {
        a[temp]=num, temp++;
    }
}

int main(){
    getline(cin,input);
    input = " "+input+" ";
    trans(" one ",a,1,temp);trans(" a ",a,1,temp);trans(" first ",a,1,temp);trans(" another ",a,1,temp);
    trans(" two ",a,2,temp);trans(" second ",a,2,temp);trans(" both ",a,2,temp);
    trans(" three ",a,3,temp);trans(" third ",a,3,temp);
    trans(" four ",a,4,temp);
    trans(" five ",a,5,temp);
    trans(" six ",a,6,temp);
    trans(" seven ",a,7,temp);
    trans(" eight ",a,8,temp);
    trans(" nine ",a,9,temp);
    trans(" ten ",a,10,temp);
    trans(" eleven ",a,11,temp);
    trans(" twelve ",a,12,temp);
    trans(" thirteen ",a,13,temp);
    trans(" fourteen ",a,14,temp);
    trans(" fifteen ",a,15,temp);
    trans(" sixteen ",a,16,temp);
    trans(" seventeen ",a,17,temp);
    trans(" eighteen ",a,18,temp);
    trans(" nineteen ",a,19,temp);
    trans(" twenty ",a,20,temp);
    if (temp==0) {cout<<0<<endl; return 0;}

    for (int i=0; i<=temp; i++) {
        a[i]=pow(a[i], 2);
        a[i]%=100;
    }
    sort(a,a+temp+1);
    int ans[100]={0}, t=0;
    for (; next_permutation(a,a+temp+1); ) {
        for (int i=0; i<=temp; i++) {
            ans[t] = ans[t]*100+a[i];
        }
        t++;
    }
    sort(ans,ans+t+1);
    cout<<ans[0]<<endl;
    return 0;
}