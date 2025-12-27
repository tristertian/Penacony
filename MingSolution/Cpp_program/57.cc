//Application of function 'strlen'
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[100];
    cout<<"Type in a string: "; cin>>str;
    cout<<"The length of string "<<str<<" is "<<strlen(str)<<'\n';
    return 0;
}