#include <iostream>
#include "caishu.h"
using namespace std;

static void prompt(){
    cout<<"0~"<<max_no<<":";
}
int input(){
    int val;
    do {
        prompt();   cin>>val;
    }while (val<0 || val>max_no);
    return val;
}
bool confirm_retry(){
    int cont;
    cout<<"Try again?\n"
        <<"<Yse...1 / No...0>:";
    cin>>cont;
    return static_cast<bool>(cont);
}