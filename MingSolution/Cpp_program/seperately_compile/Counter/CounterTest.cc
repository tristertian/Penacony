#include <iostream>
#include "Counter.h"
using namespace std;

int main(){
    int no;
    Counter x, y;
    cout<<"Count upward time: ";
    cin>>no;
    for (int i=0; i<no; i++){
        cout<<x++<<" "<<++y<<'\n';
    }                               //count upward (x postposition/y preposition)

    cout<<"Count downward time: ";
    cin>>no;
    for (int i=0; i<no; i++){
        cout<<x--<<" "<<--y<<'\n';
    }                               //count downward (x postposition/y preposition)

    if (!x) {
        cout<<"x is 0.\n";
    }else {
        cout<<"x is not 0.\n";
    }
}