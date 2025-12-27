//print the value of intrger type

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    cout<<"char             :"<<CHAR_MIN<<"~"<<CHAR_MAX<<'\n';
    cout<<"signed char      :"<<SHRT_MIN<<"~"<<SCHAR_MAX<<'\n';
    cout<<"unsigned char    :"<<0       <<"~"<<UCHAR_MAX<<'\n';

    cout<<"short int        :"<<SHRT_MIN<<"~"<<SHRT_MAX<<'\n';
    cout<<"int              :"<<INT_MIN <<"~"<<INT_MAX<<'\n';
    cout<<"long int         :"<<LONG_MIN<<"~"<<LONG_MAX<<'\n';

    cout<<"unsigned short int:"<<0<<"~"<<USHRT_MAX<<'\n';
    cout<<"unsigned int     :"<<0<<"~"<<USHRT_MAX<<'\n';
    cout<<"unsigned long int:"<<0<<"~"<<USHRT_MAX<<'\n';
    
    return 0;
}