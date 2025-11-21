#include <iostream>
using namespace std;

int main()
{
    unsigned a;
    cin>>a;
    int day=1;
    for (; a!=1; a/=2.0) {
        day++;
    }
    cout<<day<<endl;
    return 0;
}