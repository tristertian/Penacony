#include <iomanip>
#include <iostream>
#include "IntArray.h"
using namespace std;

int main(){
    int n;
    cout<<"Elements of a: ";
    cin>>n;

    IntArray a(n);
    for (int i=0; i<a.size(); i++) {
        a[i] = i;
    }

    IntArray b(128), c(256);
    cout<<"Elements of b and c change from "
        <<b.size()<<" and "<<c.size();
    c = b = a;
    cout<<" to "<<b.size()<<" and "<<c.size()<<'\n';

    IntArray d = b;
    cout<<"    a    b    c    d\n";
    cout<<"-------------------------------\n";
    for (int i=0; i<n; i++) {
        cout<<setw(5)<<a[i]<<setw(5)<<b[i]
            <<setw(5)<<c[i]<<setw(5)<<d[i]<<'\n';
    }
}