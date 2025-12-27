#include <iostream>
using namespace std;

int main()
{
    int n;  cin>>n;
    int a[10000]={0}, count = 0;
    for (int i=0; n!=1; i++) {
        a[i] = n;
        n = (n%2!=0)?(n*3+1):(n/2);
        count++;
    }
    cout<<"1 ";
    for (int i=count-1; i>=0; i--) {
        cout<<a[i]<<((i==0)?"\n":" ");
    }
    return 0;
}