#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int amt;    cin>>amt;
    double cost;
    const double price_1=0.4463,price_2=0.4663,price_3=0.5663;
    if (amt<=150) {
        cost=price_1*amt;
    }else if (amt<=400) {
        cost=price_1*150 + price_2*(amt-150);
    }else {
        cost=price_1*150 + price_2*250 + price_3*(amt-400);
    }
    cout<<fixed<<setprecision(1)<<cost<<endl;
    return 0;
}