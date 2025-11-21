//const-pointer type parameter
//Find the maximum value of height and weight
#include <iostream>
using namespace std;

int maxof(const int*a,int n){
    int max=a[0];
    for (int i=1; i<n; i++) {
        if (a[i]>max) {
            max=a[i];
        }
    }
    return max;
}

int main(){
    const int number=5;
    int height[number], weight[number];

    cout<<"Weight&height of "<<number<<" people\n";
    for (int i=0; i<number; i++) {
        cout<<"Height of NO."<<i+1<<": ";   cin>>height[i];
        cout<<"Weight of NO."<<i+1<<": ";   cin>>weight[i];
    }
    int hmax=maxof(height, number);
    int wmax=maxof(weight, number);

    cout<<"Tallest  : "<<hmax<<"cm\n"
        <<"Fatest   : "<<wmax<<"kg\n";
    return 0;
}