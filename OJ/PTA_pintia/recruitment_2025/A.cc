#include <iostream>
using namespace std;

int a, b, c, k, sum;
int main() {
    cin>>a>>b>>c>>k;
    sum=a+b+c;
    if (sum%k==0) {
        cout<<sum/k<<endl;
    }else {
        cout<<sum/k+1<<endl;
    }
    return 0;
}