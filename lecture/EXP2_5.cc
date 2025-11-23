#include <iostream>
using namespace std;

bool is_prime(int x){
    if (x<=1) return false;
    if (x==2) return true;
    for (int i=3; i<x; i++) {
        if (x%i == 0) return false;
    }
    return true;
}

int main(){
    cout<<2<<' ';
    for (int i=3; i<=100; i+=2) {
        if (is_prime(i)==true) {
            cout<<i<<(i==97 ? '\n' : ' ');
        }
    }
}
