//random number
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
    srand(time(NULL));              //设置随机数种子
    int lucky = rand() % 10;                    //计算0~9的·随机数
    cout<<lucky<<" is today's lucky number.\n";
    return 0;
}