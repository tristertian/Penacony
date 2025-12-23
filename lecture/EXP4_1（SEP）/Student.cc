#include <iostream>
#include "Student.h"
using namespace std;

void Student::init(){
    int ID;         cin>>ID;        this->ID = ID;
    string Name;    cin>>Name;      this->Name = Name;
    int CPlusScore; cin>>CPlusScore;this->CPlusScore = CPlusScore;
    int AMathScore; cin>>AMathScore;this->AMathScore = AMathScore;
    int CEngScore;  cin>>CEngScore; this->CEngScore = CEngScore;
}
int Student::max(){
    int temp[] = {this->CPlusScore, this->AMathScore, this->CEngScore,};
    int max = 0;
    for (int i=0; i<3; i++) {if (temp[i]>max) {max=temp[i];}}
    return max;
}
double Student::avg(){
    double avg = (this->CPlusScore + this->AMathScore + this->CEngScore) / 3.0;
    return avg;
}