#include <iostream>
using namespace std;

int main()
{
    int a[100], n;
    for (int i=0; i<100; i++) {
        cin>>a[i];
        if (a[i]==0) {
            n = i-1;
            break;
        }

    }
    for (int i=n; i>=0; i--) {
        cout<<a[i]<<((i==0) ? "\n" : " ");
    }
    return 0;
}