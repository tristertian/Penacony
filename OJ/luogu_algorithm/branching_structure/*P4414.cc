#include <iostream>
#include <string>
using namespace std;

void swap(int&a, int&b)
{
    if (a>b) {
        int temp=a;     a=b;    b=temp;
    }
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

int main()
{
    int a[3];   string c;
    cin>>a[0]>>a[1]>>a[2]>>c;
    sort(a[0],a[1],a[2]);

    cout<<a[c[0]-'A']<<" "<<a[c[1]-'A']<<" "<<a[c[2]-'A']<<endl;

    return 0;
}