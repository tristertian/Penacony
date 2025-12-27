#include <iostream>
#include <algorithm>
using namespace std;

const int MAXN=1010;
struct Student{
    int chinese, mathmatic, english, total;
    Student(int x,int y,int z){
        chinese = x, mathmatic = y, english = z;
        total = x+y+z;
    }
    Student(){}
} a[MAXN];

bool check(int x,int y,int z){
    return abs(x-y) <= z;
}

int cnt;
int main(){
    int n;  cin>>n;
    for (int i=1; i<=n; i++) {
        int x, y, z;
        cin>>x>>y>>z;
        a[i] = Student(x,y,z);
    }
    for (int i=1; i<=n; i++) {
        for (int j=i+1; j<=n; j++) {
            if (check(a[i].chinese, a[j].chinese, 5)
                && check(a[i].mathmatic, a[j].mathmatic, 5)
                && check(a[i].english, a[j].english, 5)
                && check(a[i].total, a[j].total, 10)) {
                    cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}