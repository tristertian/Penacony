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
    }
}