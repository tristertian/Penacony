#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    //cout<<a*0.2+b*0.3+c*0.5<<endl;
    //避免浮点运算，使用整数运算代替
    cout<<(a*2+b*3+c*5) / 10<<endl;

    return 0;
}