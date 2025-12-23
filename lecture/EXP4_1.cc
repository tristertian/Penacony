#include <iomanip>
#include <iostream>
using namespace std;
const int STUN = 5;

class Student{
    string Name;
    int ID, CPlusScore, AMathScore, CEngScore;
public:
    Student(){};
    void init();
    int max();
    double avg();
};
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

double MaxAvg(Student *p){
    int sum = 0;
    for (int i=0; i<STUN; i++) {
        sum += p[i].max();
    }
    return static_cast<double>(sum) / STUN;
}
double GlbAvg(Student *p){
    int sum = 0;
    for (int i=0; i<STUN; i++) {
        sum += p[i].avg();
    }
    return static_cast<double>(sum) / STUN;
}

int main(){
    Student a[STUN];
    for (int i=0; i<STUN; i++) {
        a[i].init();
    }
    cout<<fixed<<setprecision(1)<<MaxAvg(a)<<'\n'
        <<fixed<<setprecision(1)<<GlbAvg(a)<<'\n';

    cout<<"田佩宁 202512898\n";
}