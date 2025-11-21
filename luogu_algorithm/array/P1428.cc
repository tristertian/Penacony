#include <iostream>
using namespace std;

int main()
{
    int n, a[100];
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    int count[100]={0};
    for (int i=0; i<n; i++) {   //every fish
        for (int j=i; j>=0; j--) {
            if (a[j]<a[i]) {
                count[i]++;
            }
        }
    }
    for (int i=0; i<n; i++) {
        cout<<count[i]<<((i==(n-1)) ? "\n" : " ");
    }
    return 0;
}