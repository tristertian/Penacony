#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    int n;  int*p;
    cout<<"n    :"<<typeid(n).name()<<'\n'
        <<"&n   :"<<typeid(&n).name()<<'\n'
        <<"p    :"<<typeid(p).name()<<'\n'
        <<"*p   :"<<typeid(*p).name()<<'\n';
    return 0;
}