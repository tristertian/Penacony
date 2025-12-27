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
    std::string to_string() const;  //return string expression
};

//operator overloading
std::ostream& operator<<(std::ostream& s, const Date& x);   //inserter
std::istream& operator>>(std::istream& s, Date& x);         //extractor