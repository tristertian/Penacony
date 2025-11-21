//string pointer(!!!ISO C++11 does not allow conversion from string literal to 'char *')

#include <iostream>
using namespace std;

int main(){
    char str[] = "ABC";
    char*ptr   = "123";
    cout<<"str=\""<<str<<"\"\n"
        <<"ptr=\""<<ptr<<"\"\n";
    return 0;
}