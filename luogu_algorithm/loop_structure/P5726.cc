#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;  cin>>n;
    int sum=0, max=0, min=10;
    for (int i=0; i<n; i++) {
        int temp;   cin>>temp;
        sum+=temp;
        if (temp>max) {
            max = temp;
        }
        if (temp<min) {
            min = temp;
        }
    }
    cout<<fixed<<setprecision(2)
        <<static_cast<double>(sum-min-max)/(n-2)
        <<endl;
    return 0;
}