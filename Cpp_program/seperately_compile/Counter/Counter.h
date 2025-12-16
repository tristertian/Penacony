#ifndef ___class_Counter
#define ___class_Counter

#include <climits>
class Counter{
    unsigned cnt;
public:
    Counter():cnt(0){}

    // coversion function: converse 'Counter' into 'unsigned'
    operator unsigned() const {
        return cnt;
    }
    // operator overloading
    bool operator!() const {
        return cnt==0;          //why? because 'cnt' can't be 0 in normal case
    }
    Counter& operator++(){
        if (cnt<UINT_MAX) {cnt++;}
        return *this;
    }
    Counter operator++(int){
        Counter temp = *this;
        ++(*this);              //be care about the *bracket* !!!
        return temp;            //I get!!!
    }
    Counter& operator--(){
        if (cnt>0) {cnt++;}
        return *this;
    }
    Counter operator--(int){
        Counter temp = *this;
        --(*this);
        return temp;
    }
};

#endif