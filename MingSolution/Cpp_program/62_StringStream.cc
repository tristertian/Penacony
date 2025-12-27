#include <iostream>
#include <sstream>
using namespace std;

int main(){
    string s = "2125/12/18";
    istringstream is(s);    //istringstream connect with string s.//'istringstream' is a typename
    int y, m, d;
    char ch;
    is>>y>>ch>>m>>ch>>d;
    cout<<y<<" "<<m<<" "<<d<<'\n';
}
//All the objecet can be insert into ostringstream
//Contrarily, all the objects can be extract from istringstream