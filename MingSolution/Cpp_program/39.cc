//pass by rerference
//rearrange 3 values in ascending order

#include <iostream>
using namespace std;

void swap(int& x, int& y)           //交换程序（使用引用传递）
{
    int temp = x;
    x = y;
    y = temp;
}
void sort(int& a, int& b, int& c)   //排序程序
{
    if (a>b) {
        swap(a, b);
    }
    if (b>c) {
        swap(b, c);
    }
    if (a>b) {
        swap(a, b);
    }
}

int main()                          //主程序
{
    int a, b, c;
    cout<<"Type in 3 values.\n"
    "They will be rearranged in ascending order.\n";
    cin>>a>>b>>c;

    sort(a, b, c);
    cout<<a<<" "<<b<<" "<<c<<endl;

    return 0;
}