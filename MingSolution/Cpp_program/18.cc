//九九乘法表

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    for (int i=1; i<=9; i++) {           //column loop
        for (int j=1; j<=9; j++) {       //row loop
            cout<<setw(3)<<i*j;
        }
        cout<<'\n';
    }
}