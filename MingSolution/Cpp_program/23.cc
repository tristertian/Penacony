//object and sizeof() operator
//display the size of int.type and variable

#include <iostream>
using namespace std;

int main()
{
    char c;
    cout<<"Size of char type: "<<sizeof(char)<<endl<<"Size of variable c: "<<sizeof(c)<<endl;
    short h;
    cout<<"Size of short type: "<<sizeof(short)<<endl<<"Size of variable h: "<<sizeof(h)<<endl;
    int i;
    cout<<"Size of int type: "<<sizeof(int)<<endl<<"Size of variable i: "<<sizeof(i)<<endl;
    long long l;
    cout<<"Size of long long type: "<<sizeof(long long)<<endl<<"Size of variable l: "<<sizeof(l)<<endl;

    return 0;
}
