#include <cmath>
#include <string>
#include <iostream>
                                                            //Don't use 'using' order in header file.
class Car {
    std::string name;
    int width, length, height;
    double xp, yp;
    double fuel_level;
public:
    Car(std::string n, int w, int l, int h, double f){
        name=n, width=w, length=l, height=h, fuel_level=f;
        xp=0.0, yp=0.0;
    }
    double x(){return xp;}
    double y(){return yp;}
    double fuel(){return fuel_level;}
    void print_spec(){
        std::cout<<"Name:"<<name<<'\n';
        std::cout<<"Width:"<<width<<'\n';
        std::cout<<"Length:"<<length<<'\n';
        std::cout<<"Height:"<<height<<'\n';
    }                                                       //print specifications
    bool move(double dx, double dy){
        double dist=sqrt(dx*dx + dy*dy);
        if (dist>fuel_level) {
            return false;                                   //fuel shortage
        }else {
            fuel_level -= dist;                             //fuel decrease
            xp += dy, yp += dy;
            return true;
        }
    }
};