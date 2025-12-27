//Tranverse elements by pointer

#include <iostream>
using namespace std;

void fill_zero(int*p, int n){
    while (n-->0) {
        *p=0, p++;          //assigned elements with 0, move the pointer to next element
    }
}

int main(){
    int x[]={1,2,3,4,5,};
    int x_size=sizeof(x) / sizeof(x[0]);
    fill_zero(x, x_size);
    for (int i=0; i<x_size; i++) {
        cout<<"x["<<i<<"]="<<x[i]<<'\n';
    }
    return 0;
}