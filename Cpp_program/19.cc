#include <iostream>
using namespace std;
int main()
{
    int length;
    cout<<"Type in the length of Isoceles R.T. triangle: ";
    cin>>length;
//Print an isoceles right triangle,
//whose right angle is on the lower-left
    for (int i = 1; i <= length; i++) {         //culumn
        for (int j = 1; j <= i; j++) {          //row
            cout<<"* ";
        }
        cout<<'\n';
    }
    cout<<endl;

//Print an isoceles right triangle,
//whose right angle is on the lower-right
    for (int i = 1; i<= length; i++) {
        for (int j = 1 ; j <= (length - i); j++) {
            cout<<"  ";
        }
        for (int k = 1; k <= i; k++) {
            cout<<"* ";
        }
        cout<<'\n';
    }
    cout<<endl;

//Print an isoceles right triangle,
//whose right angle is on the higher-left
    for (int i = 1; i <= length; i++) {
        for (int j = 0 ; j <= (length - i); j++) {
            cout<<"* ";
        }
        cout<<'\n';
    }
    cout<<endl;

//Print an isoceles right triangle,
//whose right angle is on the higher-right
     for (int i = 1; i<= length; i++) {
        for (int j = 0 ; j <= (length - i); j++) {
            cout<<"  ";
        }
        for (int k = 1; k <= i; k++) {
            cout<<"* ";
        }
        cout<<'\n';
    }
    cout<<endl;
    return 0;
}