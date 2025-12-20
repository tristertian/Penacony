#ifndef ___class_Date
#define ___class_Date

#include <iostream>
#include <string>
class Date{
    int y, m, d;
    static int dmax[];
    static int days_of_month(int y, int m);
public:
    Date();
    Date(int year, int month=1, int day=1);

    static bool is_leap(int year){
        return (year%400==0 || year%4==0 && year%100==0);
    }
    int year(){return y;}
};

#endif