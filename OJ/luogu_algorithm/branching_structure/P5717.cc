#include <bits/stdc++.h>
using namespace std;

void swap(int& a, int& b)
{
    if (a>b) {
        int temp = a;
        a = b;
        b = temp;
    }
}

void sort(int& a, int& b, int& c)
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

int a, b, c;
int main()
{
    cin>>a>>b>>c;   sort(a, b, c);
    if (a+b<=c || c-b>=a) {
        cout<<"Not triangle\n";
    }else {
        if (a*a+b*b == c*c) {
            cout<<"Right triangle\n";
        }
        if (a*a+b*b > c*c) {
            cout<<"Acute triangle\n";
        }
        if (a*a+b*b < c*c) {
            cout<<"Obtuse triangle\n";
        }
        if (a == b || b == c) {
            cout<<"Isosceles triangle\n";
        }
        if (a==b && b==c) {
            cout<<"Equilateral triangle\n";
        }
    }

    return 0;
}