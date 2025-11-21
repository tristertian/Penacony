//usage of class
#include <string>
#include <iostream>
using namespace std;

class Account{
private:
    string full_name, number;
    long crnt_balance;
public:
    //constructor
    Account(string name, string num, long amnt){
        full_name=name, number=num, crnt_balance=amnt;
    }
    string name(){
        return full_name;
    }
    string no(){
        return number;
    }
    long balance(){
        return crnt_balance;
    }
    void deposit(long amnt){
        crnt_balance += amnt;
    }
    void withdraw(long amnt){
        crnt_balance -= amnt;
    }
};

int main(){
    Account liyang("李阳", "12345678", 1000);
    Account zhouyan("周燕", "87654321", 200);
    liyang.withdraw(200);
    zhouyan.deposit(100);
    cout<<liyang.name()<<' '<<liyang.no()<<' '<<'$'<<liyang.balance()<<'\n';
    cout<<zhouyan.name()<<' '<<zhouyan.no()<<' '<<'$'<<zhouyan.balance()<<'\n';
}