//Judge the remainder of a real number
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x;

    cout<<"Typein a real number: ";     cin>>x;

    if (double m = fmod(x, 10)) {
        cout<<"It cannot be exactly divided by 10.\nRemainder: "
        <<m<<endl;
    }else {
        cout<<"It can be exactly divided by 10.";
    }
}