#include "Boolean.h"
using namespace std;

Boolean is_eq(int x, int y){
    return x==y;
}

int main(){
    int n;
    Boolean a;
    Boolean b = a;
    Boolean c = 100;
    Boolean x[8];

    cout<<"Type in an integer: ";   cin>>n;
    x[0] = is_eq(n, 5);
    x[1] = (n != 3);
    x[2] = Boolean::False;
    x[3] = 1000;
    x[4] = c==Boolean::True;
    cout<<"a="<<(int)a<<'\n';
    cout<<"b="<<static_cast<string>(b)<<'\n';

    for (int i=0; i<8; i++) {
        cout<<"x["<<i<<"]="<<x[i]<<'\n';
    }
}