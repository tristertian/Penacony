//copy an array

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    const int n = 5;
    int a[n];   int b[n] = {0};
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100;
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
    cout<<endl;
    for (int i = 0; i < n; i++) {
        b[i] = a[i];
        cout<<"b["<<i<<"] = "<<b[i]<<endl;
    }
    return 0;
}