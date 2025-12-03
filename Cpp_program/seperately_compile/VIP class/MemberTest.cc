#include "Member.h"
using namespace std;

void print(Member*p){
    p->print();
}
int main(){
    Member wangming("Wang Ming", 15, 4);
    wangming.set_rank(wangming.get_rank() + 1);
    print(&wangming);
}