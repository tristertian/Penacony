//Judge season
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string retry;
    do {
        int month;
        cout<<"Type in a month in Arabic numeral: ";
        cin>>month;

        switch (month) {
            case 3:;case 4:;case 5:cout<<"Spring\n";    break;
            case 6:;case 7:;case 8:cout<<"Summer\n";    break;
            case 9:;case 10:;case 11:cout<<"Autumn\n";  break;
            case 12:;case 1:;case 2:cout<<"Winter\n";   break;
            default:
            cout<<"No such season\nTry again? Y...Yes/N...No";
            cin>>retry;                                 break;
        }
    }while (retry=="Y"||retry=="y");
}