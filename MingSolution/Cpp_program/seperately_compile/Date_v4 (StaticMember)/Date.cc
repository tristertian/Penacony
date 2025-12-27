#include <iostream>
#include <sstream>
#include <ctime>
#include "Date.h"
using namespace std;

// *leap year assecement* available
int Date::dmax[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int Date::days_of_month(int y, int m){
    return dmax[m - 1] + (m==2 && (is_leap(y) ? 1 : 0));
}                               // only 0~11, so we need use expression 'm-1'
Date::Date(){
    // acquair for breakdown time
    time_t current = time(NULL);
    struct tm* local = localtime(&current);
    y = local->tm_year + 1900;  // year: tm_year is GEOcalendar-1900
    m = local->tm_mon + 1;      // month: tm_mon is between 0~11
    d = local->tm_mday;
}
Date::Date(int yy, int mm, int dd) :y(yy), m(mm), d(dd){}

int Date::day_of_year() const {
    int days = d;
    for (int i=1; i<m; i++) {
        days += days_of_month(y, i);    // accumulation
    }
    return days;
}
Date Date::preceding_day() const {
    Date temp = *this;
    if (temp.d > 1) {
        temp.d--;
    }else {
        if (--temp.m < 1) {
            temp.y--;
            temp.m = 12;
        }
        temp.d = days_of_month(temp.y, temp.m);
    }
    return temp;
}
Date Date::following_day() const {
    Date temp = *this;
    if (temp.d < days_of_month(temp.y, temp.m)) {
        temp.d++;
    }else {
        if (++temp.m > 12) {
            temp.y++;
            temp.m = 1;
        }
        temp.d = 1;
    }
    return temp;
}

int Date::day_of_week() const {
    int yy=y, mm=m;             // why no dd?  'd' doesn' t need to change
    if (mm==1 || mm==2) {
        yy--, mm+=12;
    }
    return (yy+yy / 4-yy / 100+yy / 400+(13*mm+8) / 5 + d)  %  7;
}

// I/O control part
string Date::to_string() const {
    ostringstream s;
    s << y<<"/"<<m<<"/"<<d;
    return s.str();
}
ostream& operator<<(ostream& s, const Date& x){
    return s<<x.to_string();
}
istream& operator>>(istream& s, Date& x){
    int yy, mm, dd;
    char ch;
    s >> yy>>ch>>mm>>ch>>dd;
    x = Date(yy, mm, dd);
    return s;
}