#include <iostream>
using namespace std;

const int MAXN=100;
int n, statu[MAXN];
string map[MAXN], vote[MAXN];
int main() {
    ios::sync_with_stdio(false);

    cin>>n; cin.ignore();
    for (int i=1; i<=n; i++) {
        getline(cin,map[i]);
    }   
    for (int i=1; i<=n-1; i++) {
        getline(cin,vote[i]);
    }

    for (int i=1; i<=n-1; i++) {
        if (vote[i].find("SELECT") != string::npos) {
            string last=vote[i].substr(7);
            for (int j=1; j<=n; j++) {
                if (map[j].find(last) != string::npos) {
                    statu[j]=1;
                    break;
                }
            }
        }else {
            string last=vote[i].substr(5);
            for (int j=1; j<=n; j++) {
                if (map[j].find(last) != string::npos) {
                    statu[j]=1;
                    break;
                }
            }
        }
    }

    for (int i=1; i<=n; i++) {
        if (statu[i]==0) {
            cout<<map[i]<<endl;
            break;
        }
    }
    return 0;
}