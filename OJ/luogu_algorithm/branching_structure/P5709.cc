#include <iostream>
#include <math.h>
using namespace std;

int m, t, s;
int main()
{
    cin>>m>>t>>s;
    int left;      //left可能大于0，等于0或小于0
    if (t==0 || m-ceil(static_cast<double>(s)/t) < 0) {
        left=0;
    }else {
        left = m-ceil(static_cast<double>(s)/t);
    }
    cout<<left<<endl;

    return 0;
}