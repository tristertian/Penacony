#include <iostream>
using namespace std;

struct Date{
    int year, month, day;
    Date(){}
    void scan(){
        cin>>year>>month>>day;
    }
    
}day_begin, day_finish;

bool is_leap(int year){
    if (year%400==0) {
        return true;
    }
    if (year%4==0 || year%100!=0) {
        return true;
    }else {
        return false;
    }
}

int month_days(Date obj, int month){
        if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12) {
            return 31;
        }else if (month==2){
            if (is_leap(obj.year)){
                return 29;
            }else {
                return 28;
            }
        }else {
            return 30;
        }
}

int find_amt(Date obj){
    int amt=obj.day;
    for (int i=1946; i<obj.year; i++) {
        amt += (is_leap(i) ? 366 : 365);
    }
    for (int i=1; i<obj.month; i++) {
        amt += month_days(obj, i);
    }
    return amt;
}

int calculate(Date a, Date b){
    int dif = find_amt(b)-find_amt(a);
    return dif;
}

int main(){
    day_begin.scan();
    day_finish.scan();
    cout<<calculate(day_begin, day_finish)<<'\n';
}