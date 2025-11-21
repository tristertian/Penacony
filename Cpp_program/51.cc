//sequential search

#include <iostream>
using namespace std;

int seq_search(int*p, int n, int key){
    // for (int i=0; i<n; i++) {
    //     if (*p++ == key) {
    //         return i;
    //     }
    // }
    // return -1;          //fail to search

    
    int*r=p;
    while (n-->0) {
        if (*r==key) {
            return r-p;     //subtraction of pointers.
        }else {
            r++;
        }
    }
    return -1;
}

int main(){
    int idx, key;
    cin>>key;
    int x[]={54,28,89,18,77,23,52,};
    int x_size=sizeof(x) / sizeof(x[0]);

    if ((idx=seq_search(x, x_size, key)) != -1) {
        cout<<"x["<<idx<<"] has the same value as the key."<<'\n';
    }else {
        cout<<"Target value not found."<<'\n';
    }
    return 0;
}