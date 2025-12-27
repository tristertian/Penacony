#include <iostream>
using namespace std;

int main()
{
    int d[7], in_cls[7], aft_cls[7];
    for (int i=0; i<7; i++) {
        cin>>in_cls[i]>>aft_cls[i];
        d[i]=in_cls[i]+aft_cls[i];    
    }

    int max_value = d[0];
    for (int i=0; i<7; i++) {
        if (d[i]>max_value) {
            max_value = d[i];
        }
    }

    if (max_value<=8){
        cout<<"0"<<endl;
    }else {
        for (int i=0; i<7; i++) {
            if (d[i] == max_value) {
                cout<<i+1<<endl;
                break; 
            }
        }
    }
    return 0;
}