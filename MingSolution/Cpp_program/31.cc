//reverse rank an array

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    const int n = 5;
    int a[n];
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        a[i]=rand()%100;
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }

    cout<<endl;

    for (int i = 0; i < n/2; i++) {
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    for (int i = 0; i < n; i++) {
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
    return 0;
}