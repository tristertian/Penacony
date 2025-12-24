#include <iostream>
using namespace std;

const int DefaultLen = 5;

template<typename T>
class DataProcess{
    T* a;
    int len;
public:
    DataProcess<T>(T* array, int l=DefaultLen) 
    :a(array), len(l){}
    void sort(T*&a, int left, int right) {
        int i = left, j = right;
        T flag = a[(left + right) / 2], temp;
        do {
            while (a[i] < flag) i++;
            while (a[j] > flag) j--;
            if (i <= j) {
                temp = a[i]; a[i] = a[j]; a[j] = temp;
                i++; j--;
            }
        } while (i <= j);
        if (left < j) sort(a, left, j);
        if (i < right) sort(a,i, right);
    }
    void print() {
        cout << "before sort: ";
        for (int i = 0; i < len; i++) {
            cout << a[i] << (i == len - 1 ? '\n' : ' ');
        }
        cout << "after sort: ";
        sort(a, 0, len - 1);
        for (int i = 0; i < len; i++) {
            cout << a[i] << (i == len - 1 ? '\n' : ' ');
        }
    }
};

int main() {
    int num1[] = {3, 6, 2, 1, 4};
    DataProcess<int>_num1(num1);
    double num2[] = {3.1, 1.2, 4.5, 1.1, 0.2};
    DataProcess<double>_num2(num2);
    char str[] = {'s', 'd', 'a', 'y', 't'};
    DataProcess<char>_str(str);

    _num1.print();  cout<<'\n';
    _num2.print();  cout<<'\n';
    _str.print();   cout<<'\n';

    cout<<"田佩宁 202512898\n";
}