#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int x;  cin>>x;
    cout<<fixed<<setprecision(5)
        <<(exp(x)-exp(-x))/2<<endl;
    cout<<"\n田佩宁 202512898\n";
    return 0;
}
