#include <ctime>
#include <cstdlib>
#include "caishu.h"
using namespace std;

static int answer=0;
//initialize
void initialize(){
    srand(time(NULL));
}
//quesetion
void gen_no(){
    answer=rand()%(max_no + 1);
}
//judge
int judge(int cand){
    if (cand==answer) {
        return 0;
    }else if (cand>answer) {
        return 1;
    }else {
        return 2;
    }
}