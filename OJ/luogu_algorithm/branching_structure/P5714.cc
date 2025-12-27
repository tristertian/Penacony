#include <iostream>
using namespace std;

int main()
{
    double weight, height;
    cin>>weight>>height;
    double BMI=weight/(height*height);
    if (BMI < 18.5) {
        cout<<"Underweight"<<endl;
    }else if (BMI < 24) {
        cout<<"Normal"<<endl;
    }else {
        cout<<BMI<<endl<<"Overweight"<<endl;
    }

    return 0;
}