#ifndef ___Class_Student
#define ___Class_Student

#include <iostream>
class Student{
    std::string Name;
    int ID, CPlusScore, AMathScore, CEngScore;
public:
    Student(){};
    void init();
    int max();
    double avg();
};

#endif