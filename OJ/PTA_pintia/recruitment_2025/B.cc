#include <iostream>
using namespace std;

int opt;
int main(){
    cin>>opt;
    if (opt==1) {
        string input;   cin>>input;
        if (input=="ksm") {
            cout<<"Toyama Kasumi"<<endl;
        }else if (input=="ars") {
            cout<<"Ichigaya Arisa"<<endl;
        }else if (input=="tsg") {
            cout<<"Hazawa Tsugumi"<<endl;
        }else if (input=="moca") {
            cout<<"Aoba Moca"<<endl;
        }else {
            cout<<"Hiromachi Nanami"<<endl;
        }
    }
    if (opt==2) {
        int thing, x;   cin>>thing>>x;
        if (thing==1) {
            if (x<70) {
                cout<<"just do it";
            }else if (x<84) {
                cout<<"idk";
            }else {
                cout<<"fuan desu";
            }
        }else if (thing==2) {
            if (x<50) {
                cout<<"just do it";
            }else if (x<60) {
                cout<<"idk";
            }else {
                cout<<"fuan desu";
            }
        }else {
            if (x<30) {
                cout<<"just do it";
            }else if (x<36) {
                cout<<"idk";
            }else {
                cout<<"fuan desu";
            }
        }
    }
    if (opt==3) {
        int len, n;
        string input;
        char set[100][5];

        cin>>len>>input>>n;
        for (int i=1; i<=n; i++) {
            cin>>set[i][1]>>set[i][2];
        }
        for (int i=n; i>0; i--) {
            for (int j=0; j<len; j++) {
                if (input[j]==set[i][2]) {
                    input[j]=set[i][1];
                }
            }
        }
        cout<<input<<endl;
    }
    return 0;
}