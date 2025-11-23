#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string invert(string s) {
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    
    for (int i = 0; i < n; i++) {
        string str;
        getline(cin, str);
        cout << invert(str) << endl;
    }
    
    return 0;
}
