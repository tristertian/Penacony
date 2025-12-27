//specialized function template
#include <cstring>
#include <iostream>
using namespace std;

template <typename T>
T maxof(T a, T b){
    return (a>b ? a: b);
}

//an explicit specialization for const char* type
template<>
const char* maxof (const char*a, const char*b){
    return strcmp(a,b)>0 ?a : b;
}

int main(){
    int a, b;   char s[64], t[64];
    cout<<"Integer a: ";    cin>>a;
    cout<<"Integer a: ";    cin>>b;
    cout<<"String literal s: ";  cin>>s;
    cout<<"String literal s: ";  cin>>t;

    cout<<"The maximum value of a&b is "<<maxof(a, b)<<'\n';
    cout<<"The maximum value of s&t is "<<maxof<const char*>(s,t)<<'\n';
    cout<<"The maximum value of s&\"ABC\" is "<<maxof<const char*>(s, "ABC")<<'\n';
}