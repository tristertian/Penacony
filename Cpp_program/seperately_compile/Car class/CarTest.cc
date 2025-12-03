#include <iostream>
#include "Car.h"
using namespace std;

int main(){
    string name;
    int width, length, height;
    double gas;
    cout<<"Type in the specification of car.\n";
    cout<<"Name:";  cin>>name;
    cout<<"Width:";  cin>>width;
    cout<<"Length:";  cin>>length;
    cout<<"Height:";  cin>>height;
    cout<<"Fuel level:";  cin>>gas;

    Car myCar(name, width, length, height, gas);
    myCar.print_spec();
    while (true) {
        cout<<"Present location:("<<myCar.x()<<","<<myCar.y()<<")\n";
        cout<<"Last fuel:"<<myCar.fuel()<<'\n';
        cout<<"Move or not?[0...No/1...Yes]:";
        int move;   cin>>move;
        if (move==0) {break;}
        double dx, dy;
        cout<<"Distance in x axe:"; cin>>dx;
        cout<<"Distance in y axe:"; cin>>dy;
        if (myCar.move(dx,dy) != 0) {
            cout<<"\aFuel Shortage!\n";
        }
    }
}