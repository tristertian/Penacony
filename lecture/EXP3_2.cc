#include <iostream>
#include <iomanip>
using namespace std;

struct monitor{
    string pName, pDesciption;
    int pID, pPriority, pState, pCPU;
    monitor(string _pName, int _pID, int _pPriority, int _pState, int _pCPU, string _pDesciption){
        pName=_pName, pDesciption=_pDesciption;
        pID=_pID, pPriority=_pPriority, pState=_pState, pCPU=_pCPU;
    }   
    void display(int cnt){
        cout<<setiosflags(ios::left)<<setw(2)<<cnt<<":"<<setw(12)
            <<pName<<setw(5)<<pID<<setw(3)<<pPriority<<setw(3)
            <<pState<<setw(3)<<pCPU<<pDesciption<<'\n';
    }
};

int select_execute_process(monitor* obj){
    int max_priority = 0;
    int selected_index = -1;                            //why not use 114514? because it cause a bug

    for (int i=0; i<4; i++) {
        if (obj[i].pState == 1 && obj[i].pCPU > 0) {
            if (obj[i].pPriority > max_priority) {
                max_priority = obj[i].pPriority;
                selected_index = i;
            }
        }
    }
    return selected_index;
}

bool is_allzero(monitor* obj){
    for (int i=0; i<4; i++) {
        if (obj[i].pCPU != 0) {
            return false;
        }
    }
    return true;
}

int main(){
    monitor process[]={ {"chrome.exe",  101, 10, 1, 3, "google chrome"},
                        {"360.exe",     102, 7, 1, 1, "360 safe protect"},
                        {"QQ.exe",      103, 5, 1, 4, "tencet QQ"},
                        {"CPPIDE.exe",  104, 3, 1, 2, "CFree 5.0"},}; 
    int cnt=0;    
    while (is_allzero(process) != true){
        cnt++;
        int execute_index = select_execute_process(process);
        if (execute_index != -1){
            process[execute_index].pState = 2;      //change state to Excute
        }

        for (int i = 0; i < 4; i++){
            if (process[i].pState == 1){
                process[i].pPriority += 1;          //keep its state
            }else if (process[i].pState == 2){
                process[i].pPriority -= 3;
                process[i].pCPU -= 1;               //excute
                process[i].display(cnt); 
                process[i].pState = 1;              //recover state to Ready

                if (process[i].pCPU == 0){
                    process[i].pState = 3;
                }
                continue;
            }
            process[i].display(cnt);                //if no excute, then display here.
        }
        cout << '\n';
    }
}