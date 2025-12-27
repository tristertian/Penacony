#include <iostream>
using namespace std;

int main()
{
    int a[12];
    for (int i=0; i<12; i++) {
        cin>>a[i];
    }
    int remainder=0, storage=0;
    for (int i=0; i<12; i++) {
        if (a[i]>remainder+300) {
            cout<<'-'<<i+1;
            return 0;
        }
        int total=(300+remainder-a[i]);
        remainder = total%100;
        storage += (total/100)*100;
    }
    cout<<remainder+storage*12/10<<endl;
    return 0;
}