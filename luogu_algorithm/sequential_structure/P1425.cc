#include <bits/stdc++.h>
using namespace std;

int a, b, c, d, e, f;
int main()
{
    cin>>a>>b>>c>>d;
    int start_minutes = a*60 + b,
        end_minutes = c*60 + d,
        timespan = end_minutes - start_minutes;
    int e = timespan/60,
        f = timespan%60;
    cout<<e<<" "<<f<<endl;

    return 0;
}