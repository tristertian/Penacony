#include <iostream>
#include <string>
using namespace std;

void get_num(char* &ptr, int*nums, int cnt) {
    int value = 0;
    while (*ptr >= '0' && *ptr <= '9') {
        value = value * 10 + (*ptr - '0');
        ptr++;  // 移动指针
    }
    nums[cnt] = value;
}

int nums[100];

int main(){
    string a;   getline(cin, a);    a += ' ';
    char*p = &a[0];
    int cnt = 0;
    while (*p != '\0') {
        if (*p >= '0' && *p <= '9') {
            get_num(p, nums, cnt);
            cnt++;
        } else {
            p++;
        }
    }
    
    cout << "There are " << cnt << " integers:";
    for (int i = 0; i < cnt; i++) {
        cout << nums[i] << (i!=cnt-1 ? ' ' : '\n');
    }
    cout<<"\n田佩宁 202512898\n";
}
