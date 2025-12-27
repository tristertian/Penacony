//Function templet: find the maximum of an array
#include <iostream>
using namespace std;

//Below is a templet
template <class Type>
Type maxof(const Type x[], int n){
    Type max=x[0];
    for (int i=1; i<n; i++) {
        if (x[i]>max) {
            max=x[i];
        }
    }
    return max;
}

int main(){
    const int isize=5;  double ix[isize];

    cout<<"Please type in "<<isize<<" real numbers.\n";
    for (int i=0; i<isize; i++) {
        cout<<i+1<<":";
        cin>>ix[i];
    }
    cout<<'\n'<<maxof<double>(ix, isize)<<" is the maximum number.\n";
}