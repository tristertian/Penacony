#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin>>a>>b>>c;
    double p = (a+b+c)*0.5, sqr = sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<fixed<<setprecision(1)<<sqr;
    
    return 0;
}