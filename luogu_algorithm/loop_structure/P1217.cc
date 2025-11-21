//palindrome回文质数
//如何避免超时:使用“所有偶数位的回文数(除了11)都是11的倍数”的结论

#include <iostream>
using namespace std;

int main()
{
    int a, b;   cin>>a>>b;
//列出所有位数情况的回文数，同时尽量节省时间
    int palindrome[5600]={0}, count=4;
    //1&2 digits
        palindrome[0] = 3;
        palindrome[1] = 5;
        palindrome[2] = 7;
        palindrome[3]= 11;
    //3 digits
        int III[5];
        for (III[1] = 1; III[1] <= 9; III[1]+=2) {
            for (III[2] = 0; III[2] <= 9; III[2]++) {
                    palindrome[count] = 100*III[1] + 10*III[2] + III[1];
                    count++;
            }
        }
    //5 digits
        int V[5];
        for (V[1] = 1; V[1] <= 9; V[1]+=2) {
            for (V[2] = 0; V[2] <= 9; V[2]++) {
                for (V[3] = 0; V[3] <= 9; V[3]++) {
                    palindrome[count] = 10000*V[1] + 1000*V[2] +100*V[3] + 10*V[2] + V[1];
                    count++;
                }
            }
        }
    //7 digits
        int VII[5];
        for (VII[1] = 1; VII[1] <= 9; VII[1]+=2) {
            for (VII[2] = 0; VII[2] <= 9; VII[2]++) {
                for (VII[3] = 0; VII[3] <= 9; VII[3]++) {
                    for (VII[4]=0; VII[4] <= 9; VII[4]++) {
                        palindrome[count] = 1000000*VII[1] + 100000*VII[2] +10000*VII[3] + 1000*VII[4] + 100*VII[3] + 10*VII[2] + VII[1];
                        count++;
                    }
                }
            }
        }
//判断质数并输出
    for (int i=0; i<=count; i++) {
        if (palindrome[i]<a || palindrome[i]>b) {
            goto Exit;
        }
        for (int j=3; j*j<=palindrome[i]; j++) {         //j小于 根号下目标数即可，因为对称
            if (palindrome[i] % j==0) {                 //不枚举2，因为不可能是偶数
                goto Exit;
            }
        }            
        cout<<palindrome[i]<<endl;
        Exit:;
    }
    return 0;
}