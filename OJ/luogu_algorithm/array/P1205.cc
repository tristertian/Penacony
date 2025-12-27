//Transformations

#include <iostream>
using namespace std;

char a[15][15], b[15][15][15];
int main()
{
//读取行数列数以及变换前后的图案
    int n;  cin>>n;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cin>>a[i][j];
        }
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cin>>b[0][i][j];
        }
    }
//对初始图像进行变换
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            b[1][i][j] = a[n-j+1][i];
        }
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            b[2][i][j] = b[1][n-j+1][i];
        }
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            b[3][i][j] = b[2][n-j+1][i];
        }
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            b[4][i][j] = a[i][n-j+1];//我的坐标系计算存在很大问题啊！！！
        }
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            b[5][i][j] = b[4][n-j+1][i];
        }
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            b[6][i][j] = b[5][n-j+1][i];
        }
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            b[7][i][j] = b[6][n-j+1][i];
        }
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            b[8][i][j] = a[i][j];
        }
    }
//判断
    int count[10]={0};
    for (int k=1; k<9; k++) {
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                if (b[k][i][j]==b[0][i][j]) {
                    count[k]++;
                }
            }
        }
    }
    for (int i=1; i<10; i++) {
        if (count[i]==n*n) {
            switch (i) {
            case 1: cout<<1;    break;
            case 2: cout<<2;    break;
            case 3: cout<<3;    break;
            case 4: cout<<4;    break;
            case 5: 
            case 6:
            case 7: cout<<5;    break;
            case 8: cout<<6;    break;
            }
            goto exit;
        }
    }
    cout<<7;
    exit:;
    cout<<endl;
    return 0;
}