#include <iostream>
#include <algorithm>
using namespace std;

int t, a[20], cnt;
int target[][15]=
{{1,1,0,0,8,1,1,0,1,0,0,1,0,0,1},
 {1,0,1,1,8,0,0,1,0,1,1,0,0,1,0},
 {0,1,0,0,8,1,1,0,1,0,0,1,1,0,1},
 {0,0,1,1,8,0,0,1,0,1,1,0,1,1,0},};
int main(){
    cin>>t;
    for (int k=0; k<t; k++) {
        for (int i=0; i<15; i++) {
            cin>>a[i];
            if (a[i]==1 || a[i]==2 || a[i]==3 || a[i]==4 || a[i]==5 || a[i]==6 || a[i]==7) {
                a[i]=1;
            }else {
                a[i]=0;
            }
        }
        if (a[4]!=8){
            for (int i=0; i<15; i++) {
                if (a[i]==8) cnt++, swap(a[4],a[i]);
            }
        }
        int temp[4]={0};
        for (int i=0; i<4; i++) {
            for (int j=0; j<15; j++){
                if (target[i][j]!=a[j]) {
                    a[j]=((a[j]=1)?0:1);
                    temp[i]++;
                }          
            }
        }
        sort(temp,temp+4);
        cnt += (temp[0]-1)/2;
        cout<<cnt<<endl;
    }
    return 0;
}