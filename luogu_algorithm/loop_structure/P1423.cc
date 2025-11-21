#include <iostream>
using namespace std;

int main()
{
    double s;   cin>>s;
    double sum=0;
    int step=0;
    for (double i=2; sum<s; i=i*98/100.0) {
        sum += i;
        step++;
    }
    cout<<step<<endl;
    return 0;
}