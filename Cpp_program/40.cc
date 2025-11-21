//return reference function

#include <iostream>
using namespace std;

const int a_size = 5;

int& r(int idx)
{
    static int a[a_size];
    return a[idx];
}

int main()
{   
    for (int i = 0; i < a_size; i++) {
        r(i) = i;                           //r()既可以放在=左边，也可以放在=右边
    }
    for (int i = 0; i < a_size; i++) {
        cout<<"r("<<i<<") = "<<r(i)<<endl;
    }
    return 0;
}