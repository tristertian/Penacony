//using Introduce Protection to ensure the ODR rule

// Basic usage I:
// #ifndef ___class_Date
// #define ___class_Date
//
//#endif

// Basic usage II:
// #if !defined (___class_Date)
// #define ___class_Date
//
//#endif
#ifndef ___class_Date
#define ___class_Date

    #include <string>
    #include <iostream>

    class Date{
        int y, m, d;
    public:
        Date();
        Date(int yy, int mm=1, int dd=1);

        int year()  const {return y;}
        int month() const {return m;}
        int day()   const {return d;}
        Date preceding_day() const;     //return yestoday   //!!leap year process unavailable
        int day_of_week() const;        //return day of day
        std::string to_string() const;  //return string expression
    };

    //operator overloading
    std::ostream& operator<<(std::ostream& s, const Date& x);   //inserter
    std::istream& operator>>(std::istream& s, Date& x);         //extractor

#endif