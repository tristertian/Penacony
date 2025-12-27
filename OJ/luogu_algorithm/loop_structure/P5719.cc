#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    double sum_A=0, sum_B=0;
    int count_A=0, count_B=0;//记得初始化！！！
    for (int i=1; i<=n; i++){
        if (i%k==0){
            sum_A+=i;
            count_A++;
        }else {
            sum_B+=i;
            count_B++;
        }
    }
    cout<<fixed<<setprecision(1)
        <<sum_A/count_A<<" "
        <<sum_B/count_B<<endl;
    return 0;
} 