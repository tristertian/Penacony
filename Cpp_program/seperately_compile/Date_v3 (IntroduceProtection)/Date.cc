#include <iostream>
#include <ctime>
#include <sstream>
#include "Date.h"
using namespace std;

//Below here is default constructors
//SET LOCAL DATE
Date::Date(){
    time_t current = time(NULL);            //get current date
    struct tm* local = localtime(&current); //transfer it into divided time
    y = local->tm_year + 1900;                     //???
    m = local->tm_mon + 1;                         //!!!
    d = local->tm_mday;
}
//SET SPECIFIED DATE
Date::Date(int yy, int mm, int dd) :y(yy), m(mm), d(dd){}

Date Date::preceding_day() const { 
    int dmax[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    Date temp = *this;                              //using *this to copy same date

    if (temp.d > 1) {
        temp.d--;
    }else {
        if (--temp.m < 1) {
            temp.y--;   temp.m = 12;
        }
        temp.d = dmax[temp.m-1];
    }
    return temp;
}
//********************************************************************//
//                          Zeller function                           //
//********************************************************************//
int Date::day_of_week() const {
    int yy=y, mm=m;
    if (mm==1 || mm==2) {
        yy--;
        mm += 12;
    }
    return (yy + yy/4 - yy/100 + yy/400 + (13*mm + 8)/5 + d)  %  7;
    // why so? "Zeller function"(蔡勒公式)
    // (15, Oct, 1582 begin)
}
//********************************************************************//
//********************************************************************//
//String Stream(字符串流)
string Date::to_string() const {
    ostringstream s;
    s<<y<<" "<<m<<" "<<d; 
    return s.str();
}
//create and retrun a string
//by using stringstream, we can easily realize a function in shorter code length

//operator overloading
ostream& operator<<(ostream& s, const Date& x){     //better use 'T&' to pass quote of obj. *SAVING COST*
    return s<<x.to_string();
}                                                   //insert a 'Date' type obj. into an ostream
istream& operator>>(istream& s, Date& x){
    int yy, mm, dd;
    char ch;
    s>>yy>>ch>>mm>>ch>>dd;
    x = Date(yy, mm, dd);
    return s;
}                                                   //extract 3'int' & some 'char' from an istream