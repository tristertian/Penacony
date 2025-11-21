//print an isocelete right triangle that
// the tight-angle is on the lower-right

#include <iostream>
using namespace std;

void put_char(char c, int n)
{
    while (n-- > 0)                                     //函数的值传递（pass by value）
        cout<<c;
}

int main()
{
    int n;
    cout<<"print an isocelete right triangle that\n"
          "the tight-angle is on the lower-right\n"
        <<"======================================\n";
    cout<<"Length: ";   cin>>n;

    for (int i = 1; i <= n; i++) {
        put_char(' ', n - i);
        put_char('*', i);
        cout<<endl;
    }

    return 0;
}