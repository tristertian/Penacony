#include <string>
#include "Account.h"
#include "Date.h"
using namespace std;
Account::Account(string name, string num, long amnt, const Date& op)
    :full_name(name), number(num), crnt_balance(amnt), openDate(op){}
//**Above is 'constructor initializer(构造函数初始化器)'**

void Account::deposit(long amnt){
    crnt_balance += amnt;
}
void Account::withdraw(long amnt){
    crnt_balance -= amnt;
}
