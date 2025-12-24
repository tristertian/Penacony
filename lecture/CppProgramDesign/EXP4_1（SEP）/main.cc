#include <iostream>
#include "Student.h"
#include <iomanip>
using namespace std;
const int STUN = 5;

double MaxAvg(Student *p){
    int sum = 0;
    for (int i=0; i<STUN; i++) {
        sum += p[i].max();
    }
    return static_cast<double>(sum) / STUN;
}
double GlbAvg(Student *p){
    int sum = 0;
    for (int i=0; i<STUN; i++) {
        sum += p[i].avg();
    }
    return static_cast<double>(sum) / STUN;
}

int main(){
    Student a[STUN];
    for (int i=0; i<STUN; i++) {
        a[i].init();
    }
    cout<<fixed<<setprecision(1)<<MaxAvg(a)<<'\n'
        <<fixed<<setprecision(1)<<GlbAvg(a)<<'\n';

    cout<<"田佩宁 202512898\n";
}