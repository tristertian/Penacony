//comparison (function version)

#include <iostream>
using namespace std;
int main()
{
    int max(int a, int b, int c);//.....................................对max()函数进行声明
    int a, b, c;
    cout<<"Type in 3 integers, inserting a blank between each number.\n";
    cin>>a>>b>>c;
    cout<<max(a,b,c)<<" is the largest number."<<endl;

    return 0;
}
int max(int a, int b, int c)
{
    int max_number = a;
    if (b>max_number) {
        max_number = b;
    }
    if (c>max_number) {
        max_number = c;
    }

    return max_number;
}