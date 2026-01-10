//高精度计算

#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

//递归调用
// long long factorial(long long n)
// {
//     if (n>0) {
//         return n * factorial(n-1);
//     }else {
//         return 1;
//     }
// }

const int maxn=100;
struct Bigint {                             //封装大整数类
    int len, a[maxn];
    Bigint(int x=0){                        //构造函数：给Bigint一个（），方便它初始化变量
        memset(a, 0, sizeof(a));
        for (len=1; x>0; len++) {
            a[len]=x%10, x /= 10;
        }
        len--;                              //len = len-1;
    }
    int&operator[](int i) {
        return a[i];
    }
    void flatten(int L) {
        len = L;
        for (int i=1; i<=len; i++) {
            a[i+1] += a[i]/10, a[i] %= 10;
        }
        for (; !a[len]; ) {
            len--;                          //消除前导0
        }
    }
    void print() {
        for (int i=max(len,1); i>=1; i--) {
            cout<<a[i];
        }
    }
};

Bigint operator+(Bigint a,Bigint b) {       //重载运算符+
    Bigint c;
    int len = max(a.len,b.len);
    for (int i=1; i<=len; i++) {
        c[i] += a[i]+b[i];
    }
    c.flatten(len+1);
    return c ;
}

Bigint operator*(Bigint a,int b) {
    Bigint c;
    int len = a.len;
    for (int i=1; i<=len; i++) {
        c[i] = a[i]*b;
    }
    c.flatten(len+11);                    //hyw：int类型最长10位，可以像这样做一遍“展平”处理
    return c;
}

int main()
{
    Bigint ans(0), fac(1);              //构造函数在这里起作用了
    int m;  cin>>m;
    for (int i=1; i<=m; i++) {
        fac = fac*i;
        ans = ans+fac;
    }
    ans.print();
    return 0;
}