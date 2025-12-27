#include <string>
#include <iostream>
using namespace std;
int main()
{
    string retry; // 再来一次？
    do {
        int month;
        cout << "判断季节。\n月份：";
        cin >> month;
        if (month >= 3 && month <= 5) // 3 月· 4 月· 5 月
            cout << "这是春季。\n";
        else if (month >= 6 && month <= 8) // 6 月· 7 月· 8 月
            cout << "这是夏季。\n";
        else if (month >= 9 && month <= 11) // 9 月· 10 月· 11 月
            cout << "这是秋季。\n";
        else if (month == 12 || month == 1 || month == 2) // 12 月·1 月·2 月
            cout << "这是冬季。\n";
        else
            cout << "\a没有这个月份。\n";
        do {
            cout<<"Try again? [Y...yes/N...no]\n";
            cin>>retry;
        }while (retry!="Y" && retry!="y" && retry!="N" && retry!="n");
    } while (retry == "Y" || retry == "y");
}