#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int sum = 0;
    int count = 1; // 乘数从1开始
    for (int i = 0; i < s.length() - 2; i++) {
        if (s[i] == '-') continue;
        sum += (s[i] - '0') * count;
        count++;
    }
    int id = sum % 11;
    char correct_id;
    if (id == 10) {
        correct_id = 'X';
    } else {
        correct_id = id + '0';
    }
    
    char input_id = s[s.length()-1];
    if (input_id == correct_id) {
        cout << "Right" << endl;
    } else {
        s[s.length()-1] = correct_id;
        cout << s << endl;
    }
    return 0;
}