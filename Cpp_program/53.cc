//exeption process: loop create array objects.
//crush warning!!!                                        
#include <iostream>
#include <new>
using namespace std;

int main(){
    cout<<"Loop create double type array that has 30000 elements.\n";
    while (1) {
        try {
            double*a = new double[30000];
        } catch (bad_alloc) {
            cout<<"Fail to create array,program interupted.\n";
            return 1;
        }
    }
}