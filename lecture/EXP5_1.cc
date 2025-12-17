#include <iostream>
#include <iomanip>
using namespace std;

class Time {
private:
    int hour, minute, second;
    void normalize() {               // 统一
        int carry = second / 60;
        if (second < 0) { carry = (second-59)/60; second += (-carry)*60; }
        minute += carry, second %= 60;

        carry = minute/60;
        if (minute < 0) { carry = (minute-59)/60; minute += (-carry)*60; }
        hour += carry, minute %= 60;

        hour %= 24;
        if (hour < 0) { hour += 24; }
    }
public:
    Time() : hour(0), minute(0), second(0) {}
    Time(int hour, int minute, int second) : hour(hour), minute(minute), second(second) { normalize(); }

    /* 输入输出 */
    friend istream& operator>>(istream& in, Time& t) {
        return in >> t.hour >> t.minute >> t.second;
    }
    friend ostream& operator<<(ostream& out, const Time& t) {
        return out  <<setw(2)<<setfill('0')<<t.hour<<':'
                    <<setw(2)<<setfill('0')<<t.minute<<':'
                    <<setw(2)<<setfill('0')<<t.second<<'\n';
    }

    /* 复合赋值 +=  -= */
    Time& operator+=(const Time& rhs) {
        hour += rhs.hour; minute += rhs.minute; second += rhs.second;
        normalize(); return *this;
    }
    Time& operator-=(const Time& rhs) {
        hour -= rhs.hour; minute -= rhs.minute; second -= rhs.second;
        normalize(); return *this;
    }

    /* 前自增/自减 */
    Time& operator++() { second++; normalize(); return *this; }
    Time& operator--() { second--; normalize(); return *this; }

    /* 后自增/自减 */
    Time operator++(int) { Time tmp=*this; ++(*this); return tmp; }
    Time operator--(int) { Time tmp=*this; --(*this); return tmp; }
};

int main() {
    Time t1, t2;
    cin >> t1 >> t2;

    cout << (t1 += t2++) << '\n';
    cout << (t1 -= t2)   << '\n';
    cout << (++t2)       << '\n';
    cout << (t2 += t1--) << '\n';
    cout << (--t1)       << '\n';
    cout << (t2 -= t1)   << '\n';
    return 0;
}