#include <iostream>
using namespace std;

int main()
{
    int n, x;   cin>>n>>x;
    int count=0;
        for (int i=1; i<=n; i++) {
            for (int j=0,temp=i; temp>0; j++) {
                if (x==temp%10) {
                    count++;
                } 
                temp /=10;
            }
        }
        cout<<count<<endl;
    return 0;
}