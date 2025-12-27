//solution train:
//electric tube array-->dot array-->answer array
//      (0)
//      xxx
//   (1)x.x(2)
//      xxx(3)
//   (4)x.x(5)
//      xxx
//      (6)
#include <iostream>
#include <cstring>
using namespace std;

int tube[10][8]={       //10 single number, 7 tubes (tube[i][0] represents how much tubes are needing)
{6, 0,1,2,4,5,6},       //0
{2, 2,5},               //1
{5, 0,2,3,4,6},         //2
{5, 0,2,3,5,6},         //3
{4, 1,2,3,5},           //4
{5, 0,1,3,5,6},         //5
{6, 0,1,3,4,5,6},       //6
{3, 0,2,5},             //7
{7, 0,1,2,3,4,5,6},     //8
{6, 0,1,2,3,5,6},       //9
};
int dot[7][3][2]={      //location of every dot
{{0,0},{0,1},{0,2}},
{{0,0},{1,0},{2,0}},
{{0,2},{1,2},{2,2}},
{{2,0},{2,1},{2,2}},
{{2,0},{3,0},{4,0}},
{{2,2},{3,2},{4,2}},
{{4,0},{4,1},{4,2}},
};

string num;
char out[5][500];
int n;

int main()
{
    cin>>n>>num;
    for (int i=0; i<5; i++) {
        for (int j=0; j<n*4-1; j++) {
            out[i][j]='.';
        }
    }
    for (int i=0; i<n; i++) {
        int base_x=0, base_y=i*4, digit=num[i]-'0';//base_x&base_y is the higher-left location of every number.
        for (int j=1; j<=tube[digit][0]; j++) {
            int tube_num=tube[digit][j];
            out[dot[tube_num][0][0]+base_x][dot[tube_num][0][1]+base_y] = 'X';
            out[dot[tube_num][1][0]+base_x][dot[tube_num][1][1]+base_y] = 'X';
            out[dot[tube_num][2][0]+base_x][dot[tube_num][2][1]+base_y] = 'X';
        }
    }
    for (int i=0; i<5; i++) {
        for (int j=0; j<n*4-1; j++) {
            cout<<out[i][j];
        }
        cout<<endl;
    }
    return 0;
}