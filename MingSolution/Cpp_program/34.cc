//addtion of 2 rows 3 columns arraies

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int a[2][3], b[2][3], c[2][3] = {{1,2,3},{4,5,6}};

    cout<<"Initially format.\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<"c["<<i<<"]["<<j<<"] = "<<c[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;

    srand(time(NULL));
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            a[i][j] = rand() % 100;
            b[i][j] = rand() % 100;
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    cout<<"Additional format.\n";

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<"a["<<i<<"]["<<j<<"] = "<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<"b["<<i<<"]["<<j<<"] = "<<b[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<"c["<<i<<"]["<<j<<"] = "<<c[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}