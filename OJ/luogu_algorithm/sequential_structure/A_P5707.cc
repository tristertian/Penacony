#include <bits/stdc++.h>
using namespace std;

//整体思路：小时数转化为分钟数计算
int s, v;
int main()
{
    cin>>s>>v;
    int time = ceil(static_cast<double>(s) / v) +10;
    int rm_minutes = 480 - time;   //"rm" is the parameter of "remain"
    if (rm_minutes<0) {
        rm_minutes += 1440;
    }
    int HH = rm_minutes / 60 % 24,
        MM = rm_minutes % 60;

    cout<<setw(2)<<setfill('0')<<HH<<":"
        <<setw(2)<<setfill('0')<<MM<<endl;

    return 0;
}
//总结：时间计算要先转换为同一单位（分钟），不要试图
//用过于简化的数学公式来处理复杂的时间计算，而时间计
//算涉及到除法的取整规则和模运算的特殊性，需要更严谨
//的处理方式。

//常见的边界问题：
    //时间刚好是整点的情况

    //需要跨到前一天的情况

    //各种时间组合的情况