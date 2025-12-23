#include <iostream>
#include "Date.h"
using namespace std;

int main(){
    Date today;
    cout<<"Today:"<<today<<'\n'
        <<"Yestoday:"<<today.preceding_day()<<'\n'
        <<"The day before yestoday:"<<today.preceding_day().preceding_day()<<'\n'
        <<"Tomorrow:"<<today.following_day()<<'\n'
        <<"The day after tomorrow:"<<today.following_day().following_day()<<'\n';
    cout<<today.day_of_year()<<" days have past from last New Year."<<'\n'
        <<"Now we "<<(today.is_leap() ? "are" : "arn' t")<<" in leap year."<<'\n';
}