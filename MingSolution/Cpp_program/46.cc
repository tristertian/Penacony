//Dynamically create integer array object.

#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int asize;      //number of elements
    cout<<"Type in the number of elements: ";   cin>>asize;
    int*a = new int[asize];
    for (int i=0; i<asize; i++) {
        a[i]=i+1;
    }
    for (int i=0; i<asize; i++) {
        cout<<"a["<<i<<"]="<<a[i]<<'\n';    //Access to a by array "a";
    }
    delete[] a;
    return 0;
}