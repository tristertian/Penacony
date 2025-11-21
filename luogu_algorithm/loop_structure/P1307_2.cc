//用字符串方法处理

#include <iostream>
using namespace std;

int main()
{
    string s;
    long long ans=0;
    int flag=0;

    cin>>s;
    int k=s.length()-1;

    if (s[0]=='-') {
        flag=1;
        cout<<'-';
    }
    for (int i=k; i>=flag; i--) {
        ans *= 10;
        ans += (s[i]-'0'); //通过各位累加的方法消除前导零（先进！！！）
    }
    cout<<ans<<endl;
    return 0;
}