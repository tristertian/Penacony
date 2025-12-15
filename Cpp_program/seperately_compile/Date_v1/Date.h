class Date{
    int y, m, d;
public:
    Date();
    Date(int yy, int mm=1, int dd=1);
    bool is_leap();
    int year() const {return y;}
    int month() const {return m;}
    int day() const {return d;}     //const member function
};