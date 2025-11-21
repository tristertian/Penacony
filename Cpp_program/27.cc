//static_cast operator

#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Calculate the average of 2 number.\n";
    cout<<"int. x: ";   cin>>x;
    cout<<"int. y: ";   cin>>y;
    cout<<"The average of x&y is: "<<static_cast<double>(x+y)/2.0<<endl;

    return 0;
}