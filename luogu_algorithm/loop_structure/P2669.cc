#include <iostream>
using namespace std;

int main()
{
    int k, amt=0, group, temp=0;
    cin>>k;
    for (group=0; temp+group<=k; group++) {
        temp += group;
    }
    for (int i=1; i<=group-1; i++) {
        for (int j=1; j<=i; j++) {
            amt += i;
        }
    }
    cout<<amt+(k-temp)*group<<endl;
    return 0;
}