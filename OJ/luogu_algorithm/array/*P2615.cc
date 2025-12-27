#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

const int M = 40;
int n, r_bdr, down_bdr; 			//r_bdr代表右边界,down_bdr代表下边界
int map[M][M]; 						//初始地图
int stuff_i, stuff_j; 				//填充数字K的位置(用i，j代表K-1的位置)
 
void calculate(int i, int j) {
	stuff_i = stuff_j = 0; 			//初始化
	if (i == 1 && j != n) {			//若k-1在第一行但不在最后一列
		stuff_i = n;
		stuff_j = j + 1;
	}else if (j == n && i != 1) { 	//若k-1在最后一列但不在第一行
		stuff_i = i - 1;
		stuff_j = 1;
	}else if (i == 1 && j == n) { 	//若k-1在第一行最后一列
		stuff_i = i + 1;
		stuff_j = j;
	}else if (i != 1 && j != n) { 	//若k-1既不在第一行，也不在最后一列
		if (map[i - 1][j + 1] == 0 && i - 1 > 0 && j + 1 <= n) {
			stuff_i = i - 1;
			stuff_j = j + 1;		//未填数
		}else { 					//填数
			stuff_i = i + 1;
			stuff_j = j;
		}
	}
	return;
}
 
void find(int x) {
	for (int i = 1; i <= down_bdr; i++) { 	//对map进行遍历,查找K-1所在的位置
		for (int j = 1; j <= r_bdr; j++) {
			if (map[i][j] == x) {
				calculate(i, j); 		//找到后进行计算判断
			}
		}
	}
}

int main() {
	cin >> n;
	r_bdr = down_bdr = n; 				//规定边界
	map[1][n / 2 + 1] = 1;				//填写数字1
	for (int k = 2; k <= n * n; k++) {
		find(k - 1); 				//查找数字K-1
		map[stuff_i][stuff_j] = k;
	}
//输出
	for (int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) cout << map[i][j]<<" ";
		cout << endl;
	}
	return 0;
}
