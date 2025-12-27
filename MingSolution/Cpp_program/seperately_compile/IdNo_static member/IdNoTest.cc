#include <iostream>
#include "IdNo.h"
using namespace std;

int main(){
    IdNo a, b, c[4];
    cout<<"ID of a: "<<a.id()<<'\n'
        <<"ID of b: "<<b.id()<<'\n';
    for (int i=0; i<4; i++) {
        cout<<"ID of c["<<i<<"]: "<<c[i].id()<<'\n';
    }
}