#include <iostream>
using namespace std;

inline int bissextile(int x)
{
    if ((x%100) && (x%4==0)) {
        return 1;
    }else if (x%400==0) {
        return 1;
    }else {
        return 0;
    }
}

int main()
{
    int year;
    cin>>year;
    cout<<bissextile(year)<<endl;

    return 0;
}