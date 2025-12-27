#ifndef ___class_Date
#define ___class_Date

#include <iostream>
#include <string>
class Date{
    int y, m, d;
    static int dmax[12];
    static int days_of_month(int y, int m);
public:
    Date();
    Date(int year, int month=1, int day=1);

    // static member function
    static bool is_leap(int year){
        return (year%400==0 || year%4==0 && year%100==0);
    }

    int year(){return y;}
    int month(){return m;}
    int day(){return d;}

    // normal member function(call for statiic function)
    bool is_leap() const {
        return is_leap(y);
    }

    Date preceding_day() const;
    Date following_day() const;
    int day_of_year() const;
    int day_of_week() const;
    std::string to_string() const;
};

std::ostream& operator<<(std::ostream& s, const Date& x);
std::istream& operator>>(std::istream& s, Date& x);         //don' t need implicit cast

#endif