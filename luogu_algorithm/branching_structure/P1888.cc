#include <iostream>
using namespace std;

void swap(int&a,int&b)
{
    int temp=a; a=b;    b=temp;
}
void sort(int&a,int&b,int&c)
{
    if (a>b) {
        swap(a,b);
    }
    if (b>c) {
        swap(b,c);
    }
    if (a>b) {
        swap(a,b);
    }
}
void simplify(int&a,int&b)
{
    for (int i=1; i<=a; i++) {
        if (a%i==0 && b%i==0) {
            a/=i,b/=i;
        }
    }
}


int main()
{
    int a, b, c;    cin>>a>>b>>c;   sort(a, b, c);
    simplify(a, c);
    cout<<a<<"/"<<c<<endl;
    return 0;
}