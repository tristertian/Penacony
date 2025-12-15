#include <iostream>
#include "Date.h"
using namespace std;

int main(){
    Date a(2025, 11, 18);
    Date b = a;
    Date c = Date(2023, 12, 27);

    cout<<"a = "<<a.year()<<" "<<a.month()<<" "<<a.day()<<'\n';
    cout<<"b = "<<b.year()<<" "<<b.month()<<" "<<b.day()<<'\n';
    cout<<"c = "<<c.year()<<" "<<c.month()<<" "<<c.day()<<'\n';
}