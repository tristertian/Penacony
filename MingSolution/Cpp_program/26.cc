//display the value of boolean.

#include <ios>
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Type in 2 integers: ";  cin>>a>>b;

    cout<<boolalpha;

    cout<<"a <  b = "<<(a <  b)<<endl;
    cout<<"a <= b = "<<(a <= b)<<endl;
    cout<<"a >  b = "<<(a >  b)<<endl;
    cout<<"a >= b = "<<(a >= b)<<endl;
    cout<<"a == b = "<<(a == b)<<endl;
    cout<<"a != b = "<<(a != b)<<endl;
    cout<<"!a     = "<<(!a    )<<endl;
    cout<<"!b     = "<<(!b    )<<endl;

    return 0;
}