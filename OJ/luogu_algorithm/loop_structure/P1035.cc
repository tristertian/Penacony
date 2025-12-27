//高中数学，呵呵
#include <iostream>
using namespace std;

int main()
{
    int k, n, i;   double Sn;
    cin>>k;
    for (i=1; Sn<=k; i++) {
        Sn += 1.0/i;
    }
    n = i-1;
    cout<<n<<endl;
    return 0;
}