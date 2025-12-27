//Usage of typeid operator.

#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
    cout<<"Type of character literal 'A': "<<typeid('A').name()<<endl;
    cout<<"Type of integer literal 100: "<<typeid(100).name()<<endl;
    cout<<"Type of integer literal 100U: "<<typeid(100U).name()<<endl;
    cout<<"Type of integer literal 100L: "<<typeid(100L).name()<<endl;
    cout<<"Type of integer literal 100UL: "<<typeid(100UL).name()<<endl;

    return 0;
}