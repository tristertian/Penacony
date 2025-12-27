//oral calculation excersise

#include <iostream>
#include <string>
using namespace std;

int digit(int x){
    if (x==0) {
        return 1;
    }
    int temp=(x>0)?x:-x, cnt=0;
    for (; temp!=0; temp/=10) {
        cnt++;
    }
    return (x>0)?cnt:++cnt;
}

string s, str_a, str_b;
int a, b;
char method='a';
int main(){
    int n;  cin>>n; cin.ignore();//sweep the newlilne identifier.
    for (int i=0; i<n; i++) {
        getline(cin, s);
        if (s[0]=='a' || s[0]=='b' || s[0]=='c') {
            method = s[0];
            s = s.substr(2);
        }
        int pos_blank=s.find(' ');

        str_a = s.substr(0, pos_blank);  a=stoi(str_a);
        str_b = s.substr(pos_blank+1);     b=stoi(str_b);
        
        char _operator;
        int rst;
        switch (method) {
        case 'a':rst=a+b, _operator='+';break;
        case 'b':rst=a-b, _operator='-';break;
        case 'c':rst=a*b, _operator='*';break;
        }
        cout<<a<<_operator<<b<<'='<<rst<<endl
            <<s.length()+1+digit(rst)<<endl;
    }
    return 0;
}