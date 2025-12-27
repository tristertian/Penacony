//overloading of function


#include <iostream>
using namespace std;

int max(int a, int b)
{
    return (a>b) ? a :b;
}
int max(int a, int b, int c)
{
    int max = a;
    if (b>max) {
        max = b;
    }
    if (c>max) {
        max = c;
    }
    return max;
}

int main()
{
    int x, y, z;

    cout<<"x: ";    cin>>x;
    cout<<"y: ";    cin>>y;
    cout<<"z: ";    cin>>z;

    cout<<"The maximum number in x,y:   "<<max(x,y)<<endl;
    cout<<"The maximun number in x,y,z: "<<max(x,y,z)<<endl;

    return 0;
}