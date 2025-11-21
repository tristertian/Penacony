//address operator and dereference operator
#include <iostream>
using namespace std;

int main(){
    int n=135;
    cout<<"n    :"<<n<<'\n'
        <<"&n   :"<<&n<<'\n';
    int* ptr = &n;
    cout<<"ptr  :"<<ptr<<'\n'
        <<"*ptr :"<<*ptr<<'\n';
    return 0;
}