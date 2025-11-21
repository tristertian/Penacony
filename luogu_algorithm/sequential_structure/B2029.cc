#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int h, r;
int main()
{
    cin>>h>>r;
    const double PI=3.14;
    double unit_volumn = PI*r*r*h;
    cout<<ceil((20*1000)/unit_volumn);

    return 0;
}