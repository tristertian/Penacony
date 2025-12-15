#include "Date.h"

Date::Date(int yy, int mm, int dd) :y(yy), m(mm), d(dd){}
bool Date::is_leap(){
    if (this->y%400==0 || this->y%4==0 && this->y%100!=0) {
        return true;
    }else {
        return false;
    }
    //Why "no declaration" error occured? Because I didn't save it.
}