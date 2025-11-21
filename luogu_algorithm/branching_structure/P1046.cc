#include <iostream>
using namespace std;

int main()
{
    int h[10], reach;
    for (int i=0; i<10; i++) {
        cin>>h[i];
    }
    cin>>reach;     reach+=30;
    
    int count;
    for (int i=0; i<10; i++) {
        if (reach >= h[i]) {
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}