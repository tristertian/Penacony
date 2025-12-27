//Display the type&size of string literal

#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    cout<<"■\"ABC\"\n";
    cout<<"Type:"<<typeid("ABC").name()<<" "
        <<"Size:"<<sizeof("ABC")<<"\n\n";
    cout<<"■\"\"\n";
    cout<<"Type:"<<typeid("").name()<<" "
        <<"Size:"<<sizeof("")<<"\n\n";
    cout<<"■\"ABC\\0DEF\"\n";
    cout<<"Type:"<<typeid("ABC\\0DEF").name()<<" "
        <<"Size:"<<sizeof("ABC\\0DEF")<<"\n";
    return 0;
    }