//使用数组的做法

#include<bits/stdc++.h>         //万能头文件
using namespace std;
string a;
signed main()
{
	cin>>a;
	int len=a.size();           //读取长度(也可以用.length())
	for(int i=len-1;i>=0;i--){  //反转
	cout<<a[i];					//[]是下标运算符，允许像数组一样访问string中的单个字符
    }

	return 0;
}
