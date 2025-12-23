#include <algorithm>
#include <iostream>
#include <iomanip>
using namespace std;

struct monitor{
    string pName, pDesciption;
    int pID, pPriority, pState, pCPU;
    monitor(string _pName, int _pID, int _pPriority, 
            int _pState, int _pCPU, string _pDesciption){
        pName=_pName, pDesciption=_pDesciption;
        pID=_pID, pPriority=_pPriority, 
        pState=_pState, pCPU=_pCPU;
    }
    void execute(int&cnt){
        pState=2, cnt++;
        while (pCPU!=0) {
            pCPU--;
            cout<<left<<setw(2)<<cnt<<":"<<setw(12)
                <<pName<<setw(5)<<pID
                <<setw(3)<<pPriority<<setw(3)
                <<pState<<setw(3)<<pCPU
                <<pDesciption<<'\n';
            cnt++;
        }
        cnt--, pState=3;
        cout<<left<<setw(2)<<cnt<<":"<<setw(12)
            <<pName<<setw(5)<<pID
            <<setw(3)<<pPriority<<setw(3)
            <<pState<<setw(3)<<pCPU<<pDesciption<<'\n';
    }
};
bool cmp(monitor a,monitor b){
    if (a.pPriority>b.pPriority) {
        return true;
    }else {
        return false;
    }
}

//change chrome.pPriority to 1.
int main(){
    monitor process[]={ {"chrome.exe",  101, 1, 1, 3, "google chrome"},
                        {"360.exe",     102, 7, 1, 1, "360 safe protect"},
                        {"QQ.exe",      103, 5, 1, 4, "tencet QQ"},  //666 "tencet"
                        {"CPPIDE.exe",  104, 3, 1, 2, "CFree 5.0"},}; 
    int cnt=0;
    sort(process, process+4, cmp);
    for (int i=0; i<4; i++) {
        process[i].execute(cnt);
    }
    cout<<"田佩宁 202512898\n";
}