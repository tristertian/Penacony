//List the length&width of a Rectangle

#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Square: ";   cin>>x;

    for (int i = 1; i <= x; i++) {
        // if (i * i > x) {
        //     break;
        // }
        // if (x % i != 0) {
        //     continue;
        // }
        // cout<<i<<"×"<<x/i<<"\n";


        // if (x % i == 0) {
        //     cout<<i<<"×"<<x / i<<"\n";
        // }
        // if (i * i > x) {
        //     break;
        // }


        if (x % i != 0) {
            goto Exit_A;
        }
        if (i * i > x) {
            goto Exit_B;
        }
        cout<<i<<"×"<<x/i<<"\n";
        Exit_A:;
    }   Exit_B:;
    return 0;
}