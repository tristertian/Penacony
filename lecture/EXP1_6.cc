#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(long long n) {
    string s = to_string(n);
    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());
    return s == rev_s;
}

long long reverseNum(long long n) {
    string s = to_string(n);
    reverse(s.begin(), s.end());
    return stoll(s);
}

int main() {
    long long num;
    cin >> num;
    int step = 0;
    if (isPalindrome(num)) {
        cout << num << endl;
        return 0;
    }
    
    while (!isPalindrome(num)) {
        long long rev = reverseNum(num);
        long long new_num = num + rev;
        step++;
        
        cout << step << ":" << num << "+" << rev << "=" << new_num << endl;
        
        num = new_num;
    }
    
    cout << num << endl;
    return 0;
}
