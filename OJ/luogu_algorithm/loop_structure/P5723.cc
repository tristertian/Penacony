#include <iostream>
using namespace std;

int main()
{
    int n;  cin>>n;
    int count=0, sum=0;
    for (int i=2; ; i++) {
        int flag=0;
        for (int j=2; j<i; j++) {
            if (i%j==0) {
                flag=1; 
            }
            if (flag==1) {
                break;
            }
        }
        if (flag==1) {
            continue;
        }
        sum += i;
        if (sum>n) {
            break;
        }
        cout<<i<<endl;
        count++;
    }
    cout<<count<<endl;
}