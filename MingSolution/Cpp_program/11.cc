//Judge the digit of an int. num.
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Type in an integer: ";   cin>>x;
    const int temp = x;

    int i = 0;
    for (; x > 0; i++) {
        x /= 10;
    }
    cout<<"Digit of "<<temp<<" is "<<i<<endl;
    return 0;
}