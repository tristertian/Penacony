#include <iostream>
#include <string>
using namespace std;

string inverse(string str){
    if (str[0]=='0' && str.length()==1) {
        return "0";
    }
    int len=str.length();
    while (str[len-1]=='0') {
        len--;
    }
    str=str.substr(0,len);
    for (int i=0; i<=(len-1)/2; i++) {
        swap(str[i],str[len-i-1]);
    }
    return str;
}

string input, output;
int main(){
    getline(cin, input);
    if ((input.find("."))!=string::npos || (input.find("/"))!=string::npos || (input.find("%"))!=string::npos) {
        if ((input.find("."))!=string::npos) {
            string sub_1, sub_2;
            int pos_dot=input.find(".");
            sub_2=input.substr(pos_dot+1);  sub_1=input.substr(0,pos_dot);
            while (sub_2[0]=='0' && sub_2.length()!=1) {
                sub_2=sub_2.substr(1);
            }

            output=inverse(sub_1)+"."+inverse(sub_2);
        }else if ((input.find("/"))!=string::npos) {
            string sub_1, sub_2;
            int pos_dot=input.find("/");
            sub_2=input.substr(pos_dot+1);  sub_1=input.substr(0,pos_dot);
            
            output=inverse(sub_1)+"/"+inverse(sub_2);
        }else if ((input.find("%"))!=string::npos) {
            string sub=input.substr(0,input.length()-1);
            
            output=inverse(sub)+"%";
        }
    }else {
        output=inverse(input);
    }
    cout<<output<<endl;
    return 0;
}