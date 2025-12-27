//REVIEW:    
//遍历字符串（除了最后一位识别码），跳过分隔符'-'，累计加权和。
//计算余数，得到正确的识别码（字符形式）。
//比较输入的识别码和计算出的识别码。
//如果错误，替换最后一位为正确的识别码并输出整个字符串。

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;   cin>>a;
    int identifier, sum = 0, count = 1;

    for (int i=0; i < a.length()-2; i++) {
        if (a[i]=='-') {
            continue;
        }
            sum += (a[i]-'0') * count;
            count++;
    }
    identifier = sum % 11;          //结果为0~10

    char id_true;
    if (identifier == 10) {
        id_true = 'X';              //注意读题，容易遗漏
    }else {
        id_true = identifier+'0';
    }

    if (id_true == a[a.length()-1]) {
        cout<<"Right"<<endl;
    }else {
        a[a.length()-1] = id_true;
        cout<<a<<endl;
    }
     
    return 0;
}