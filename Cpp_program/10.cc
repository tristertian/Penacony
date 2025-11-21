//Chapter 1 Conclusion: random number(0~9),
//divide and module calculation,Using
//Constant varibility to calculate square&circumference
//of a circle and Using string to make a greet.
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;
int main()
{
    srand(time(NULL));
    int lucky = rand() % 10;
    cout<<lucky<<" is the lucky number.\n";

    cout<<"Result of "<<lucky<<" divide 2 is "<<lucky / 2<<endl;
    cout<<"Result of "<<lucky<<" module 2 is "<<lucky % 2<<endl<<endl;

    const int PI = 3;       int r;
    cout<<"Radiu of circle is ";    cin>>r;
    cout<<"Squre: "<<PI * r * r<<endl<<"Circumference: "<<PI * 2 * r<<endl<<endl;

    string name;
    cout<<"Your name: ";    cin>>name;
    cout<<"Hello,"<<name<<endl;

    return 0;
}