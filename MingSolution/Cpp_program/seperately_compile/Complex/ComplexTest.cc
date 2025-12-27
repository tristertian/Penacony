#include <iostream>
#include "Complex.h"
using namespace std;

int main(){
    double re, im;
    cout<<"Real part of a: ";           cin>>re;
    cout<<"Imaginary part of a: ";      cin>>im;
    Complex a(re, im);

    cout<<"Real part of b: ";           cin>>re;
    cout<<"Imaginary part of b: ";      cin>>im;
    Complex b(re, im);

    Complex c = -a+b;

    b += 2.0;
    c -= Complex(1.0, 1.0);
    Complex d(b.imag(), c.real());
    cout<<"a="<<a<<'\n'
        <<"b="<<b<<'\n'
        <<"c="<<c<<'\n'
        <<"d="<<d<<'\n';
}