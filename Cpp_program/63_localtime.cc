//How to get LOCAL TIME&DATE ?(ref. MingSolution p.392)
#include <ctime>
#include <iostream>
#include <iomanip>
int main(){
    time_t current = time(NULL);
    struct tm* timer = localtime(&current);     
    //tm struct converse 'time_t' type into 'breakdown time' that can be easily understand
    //'localtime' function can break 'CalendarTime' into 'breakdown time' that can be easily understand

    std::string wday_name[] = {"Monday", "Tuesday", "Wendnsday", "Thursday", "Friday", "Saturday", "Sunday"};
    std::cout   <<"Now it's time:"
                <<timer->tm_year+1900       <<" "
                <<timer->tm_mon+1           <<" "
                <<timer->tm_mday            <<" ("
                <<wday_name[timer->tm_wday] <<") "
                <<std::setw(2)<<std::setfill('0')<<timer->tm_hour            <<":"
                <<std::setw(2)<<std::setfill('0')<<timer->tm_min             <<":"
                <<std::setw(2)<<std::setfill('0')<<timer->tm_sec             <<"\n";
}