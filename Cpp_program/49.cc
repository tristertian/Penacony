//Assign a value for every component element in n*3 array.
#include <iomanip>
#include <iostream>
using namespace std;

void fill(int(*a)[3],int n,int v){
    for (int i=0; i<n; i++) {
        for (int j=0; j<3; j++) {
            a[i][j] = v;
        }
    }
}

int main(){
    int no, x[2][3]={0}, y[4][3]={0};

    cout<<"Type in a value: ";  cin>>no;
    fill(x, 2, no), fill(y, 4, no);

    cout<<"--- x ---\n";
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            cout<<setw(3)<<x[i][j];
        }
        cout<<'\n';
    }
    cout<<"--- y ---\n";
    for (int i=0; i<4; i++) {
        for (int j=0; j<3; j++) {
            cout<<setw(3)<<y[i][j];
        }
        cout<<'\n';
    }
    return 0;
}