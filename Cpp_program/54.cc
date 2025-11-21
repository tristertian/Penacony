//loop create array objects(hold up exceptions)

#include <cstddef>
#include <iostream>
#include <new>
using namespace std;

int main(){
    cout<<"Loop create double type array that chas 30000 elements.\n";
    while (true) {
        double*a = new(nothrow) double[30000];
        if (a==NULL) {
            cout<<"Fail to create array,program interupted.\n";
            return 1;
        }
    }
}