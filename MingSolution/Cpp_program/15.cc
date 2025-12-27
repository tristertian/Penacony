//猜数游戏

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main()
{
    cout<<"猜数游戏开始！"<<endl;
    srand(time(NULL));
    int no = rand() % 9 + 1;

    int guess;
    do
    {
        cout<<"请输入你猜的数字（1~9）：";
        cin>>guess;
        if(guess < no)
            cout<<"太小了！"<<endl;
        else if(guess > no)
            cout<<"太大了！"<<endl;
        else
            cout<<"恭喜你，猜对了！"<<endl;
    } while(guess != no);
    return 0;
}