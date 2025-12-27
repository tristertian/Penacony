//交替显示n个‘+’‘-’

#include <iostream>
using namespace std;

// int main()
// {
//     int n;
//     cout<<"Type in a number: "; cin>>n;
//     for (int i = 0; i < (n / 2); i++) {
//         cout<<"+-";
//     }
//     if (n % 2) {
//         cout<<'+';
//     }
//     cout<<'\n';
//     return 0;
// }

//Another solution
int main()
{
    int n;
    cout<<"Type in a number: "; cin>>n;
    for (int i = 0; i < n; i++) {
        if (i % 2) {
            cout<<'-';
        }else {
            cout<<'+';
        }
    }
    cout<<'\n';
    return 0;
}