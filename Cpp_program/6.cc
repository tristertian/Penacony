//找出三个整数里的最小值
#include <iostream>
using namespace std;
int f(int x, int y, int z)
{
    int m;
    m=((x<y)?x:y);    m=((z<m))?z:m;
    return (m);
}
int main()
{
    int a, b, c;
    cout<<
    "Please type in 3 integers,integrate a blank among each num.."
    <<endl;
    cin>>a>>b>>c;
    c=f(a, b, c);
    cout<<"Tne minimum number is "<<c<<'.'<<endl;

    return 0;
}