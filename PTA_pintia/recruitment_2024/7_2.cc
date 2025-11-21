#include <iostream>
#include <string>
using namespace std;

int t;
string input;
int main(){
    cin>>t; cin.ignore();
    for (int i=0; i<t; i++) {
        getline(cin,input);
        int flag=0;
        if (input.find("Genshin")!=string::npos || input.find("Yuanshen")!=string::npos) {
            flag=1;
        }
        if (flag) {
        cout<<"Qidong!"<<endl;
        }else {
        cout<<"Negative!"<<endl;
        }
    }
    return 0;
}