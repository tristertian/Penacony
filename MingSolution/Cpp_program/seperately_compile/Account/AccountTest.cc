#include <iostream>
#include "Account.h"
#include "Date.h"
using namespace std;
int main(){
    Account liyang("Li Yang", "12345678", 1000, Date(2025, 1, 24));
    liyang.withdraw(200);
    cout<<"Li Yang: \n"<<liyang.no()<<'\n'<<liyang.balance()<<'\n'<<liyang.opening_date()<<'\n';
}