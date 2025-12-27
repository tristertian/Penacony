#include <iostream>
using namespace std;                  //C language doesn't have namespace
//Pathway 1                           //这个程序使用了函数调用，我在C语言里还没有学过
    // int max(int x, int y)
    // {
    //     int z;
    //     if(x > y) z = x;
    //     else z = y;

    //     return (z);
    // }
    // int main()
    // {
    //     int a, b, m;
    //     cin>>a>>b;
    //     m = max(a, b);
    //     cout<<"max = "<<m<<"\n";

    //     return 0;
    // }

//Pathway 2
int main()
{
    int a, b, c;
    cout<<"Please type in 2 integers."<<endl;
    cin>>a>>b;
    if(a > b)    c=a;
    else
     c=b;
    cout<<"max="<<c<<endl;
}