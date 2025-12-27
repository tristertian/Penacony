//bitewise AND, bitewise inclusive OR, bitewise excutive OR,
//comlement operator and bitewise shift operator

#include <iostream>
using namespace std;

int count_bits(unsigned x)                                  //calculate the digit of "1" in integer x
{
    int bits = 0;
    while (x) {
        if (x & 1U) {
            bits++;
        }
        x>>=1;
    }
    return bits;
}

int int_bits()                                              //calculate the digit of unsigned type
{
    return count_bits(~0U); //~0U = 1111 1111 1111 1111
}

void print_bits(unsigned x)                                 //display all the digits of unsigned type
{
    for (int i = int_bits() - 1; i >= 0; i--) {
        cout<<((x>>i) & 1U ? '1' : '0');
    }
}

int main()
{
    unsigned a, b;

    cout<<"Please type in 2 nonnegetive integer.\n";
    cout<<"a: ";    cin>>a;
    cout<<"b: ";    cin>>b;

    cout<<"a    = ";    print_bits(a);      cout<<endl;
    cout<<"b    = ";    print_bits(b);      cout<<endl;
    cout<<"a & b= ";    print_bits(a & b);  cout<<endl;
    cout<<"a | b= ";    print_bits(a | b);  cout<<endl;
    cout<<"a ^ b= ";    print_bits(a ^ b);  cout<<endl;
    cout<<"~a   = ";    print_bits(~a);     cout<<endl;
    cout<<"~b   = ";    print_bits(~b);     cout<<endl;

    return 0;
}