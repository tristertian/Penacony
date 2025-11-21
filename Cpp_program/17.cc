//逆向显示整数值

#include <iostream>
using namespace std;
int main()
{
    int x;
    do {
        cout<<"Reverse a number."<<endl;    cin>>x;
        if (x < 0) {
            cout<<"Invalid data.Type in again.\n";
        }
    }while (x < 0);

    for (; x > 0; x /= 10) {
        cout<<x % 10;
    }
    cout<<endl;
}