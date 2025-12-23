#include <iostream>
using namespace std;

template<typename T>
T* sort(T* a, int left, int right) {
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
    if (i < right) sort(a, i, right);
    return a;
}

template<typename T>
void print(T* a, int len) {
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

int main() {
    int num[] = {5, 55, 2, 22, 4, 77};
    char str[] = {'n', 's', 'a', 'j', 'l', 'k', 'd', 's'};

    print(num, 6);
    cout << '\n';
    print(str, 8);

    cout<<"田佩宁 202512898\n";
}