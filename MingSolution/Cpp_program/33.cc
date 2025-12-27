//insert value in 2-Dimentional array (m[3][2]) and display 

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    int m[3][2];
    srand(time(NULL));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            m[i][j] = rand() % 100;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout<<"m["<<i<<"]["<<j<<"] = "<<m[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}