#include <cmath>
#include <iostream>
using namespace std;

int min(int a,int b,int c)
{
    int min=a;
    if (b<min) {
        min=b;
    }
    if (c<min) {
        min=c;
    }
    return min;//return语句老是出错！！！
}

int main()
{
    int n, PCS[3], price[3], quantity[3], AMT[3];
    cin>>n;
    for (int i=0; i<3; i++) {
        cin>>PCS[i]>>price[i];
    }
    
    for (int i=0; i<3; i++) {
        quantity[i] = ceil(static_cast<double>(n) / PCS[i]);        
        AMT[i] = quantity[i]*price[i];
    }
    cout<<min(AMT[0],AMT[1],AMT[2])<<endl;
    return 0;
}