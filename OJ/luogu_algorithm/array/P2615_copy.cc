#include <iostream>
using namespace std;

int n;
const int MAXN = 40;
int magic[MAXN][MAXN];//函数之外的变量均默认为0
int stuff_i, stuff_j;

void calculate(int i, int j)
{
    if (i==1 && j!=n) {
        stuff_i=n, stuff_j=j+1;
    }else if (j==n && i!=1) {
        stuff_j=1, stuff_i=i-1;
    }else if (i==1 && j==n) {
        stuff_i=i+1, stuff_j=j;
    }else if (i!=1 && j!=n) {
        if (magic[i-1][j+1]==0) {
            stuff_i=i-1, stuff_j=j+1;
        }else {
            stuff_i=i+1, stuff_j=j;
        }
    }
}

void find(int x)
{
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (magic[i][j]==x) {
                calculate(i, j);  
            }
        }
    }
}

int main()
{
    cin>>n;
    magic[1][n/2+1] = 1;    //幻方之母，万恶之源（？
    
    for (int k=2; k<=n*n; k++) {
        find(k-1);
        magic[stuff_i][stuff_j] = k;
    }

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cout<<magic[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}