//唯一分解定理：一个数能且仅能分解为一组质数的乘积

#include <iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    for (int i=2; i<=n; i++) {
        if (n%i==0){
            cout<<n/i<<endl;//找到小的数，然后使用n/i，否则会TLE
            break;
        }
    }
    return 0;
}