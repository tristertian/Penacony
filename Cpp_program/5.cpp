//包含“类”的最简单的C++程序
#include <iostream>
using namespace std;
class Student                             //class类，对“数据”和“函数”进行封装，以达到“信息隐蔽”
{
    private:                              //类中私有部分
        int num;    int score;            //num，score数据
    public:                               //类中公有部分
        void setdata()
        {
            cin>>num;   cin>>score;
        }
        void display()
        {
            cout<<"num="<<num<<endl;
            cout<<"score="<<score<<endl;
        };                                //setdata，display函数
};
Student stud1, stud2;                     //将stud1，stud2定义为 Student类 的变量，称为“对象” 
                                          //Student此处与int，double等为一种格式
int main()                                //主函数
{
    stud1.setdata();    stud2.setdata();
    stud1.display();    stud2.display();
    return 0;
}