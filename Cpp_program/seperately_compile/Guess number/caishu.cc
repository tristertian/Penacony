#include <iostream>
#include "caishu.h"
using namespace std;

int max_no=9;
int main(){
    initialize();
    cout<<"Game Begins!\n";
    do {
        gen_no();
        int panduan;
        do {
            panduan=judge(input());
            if (panduan==1) {
                cout<<"\atoo large~\n";
            }else if (panduan==2) {
                cout<<"\atoo small~\n";
            }
        }while (panduan!=0);
        cout<<"Right answer!\n";
    }while (confirm_retry());
}