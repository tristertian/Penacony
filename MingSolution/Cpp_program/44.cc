//address operator and dereference operator
#include <iostream>
using namespace std;

int main(){
    int x=123, y=567, sw;
    cout<<"x="<<x<<'\n'
        <<"y="<<y<<'\n';
    cout<<"Change the variable of value[0 --> x / 1 --> y]: ";
    cin>>sw;

    int* ptr;
    if (sw==0) {
        ptr = &x;
    }else {
        ptr = &y;
    }
    *ptr=999;
    cout<<"x="<<x<<'\n'
        <<"y="<<y<<'\n';
    return 0;
}