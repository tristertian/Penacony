//print a right-angled triangle that short length is n.

// #include <iostream>
// #include <iomanip>
// using namespace std;
#include <cstdio>

int main()
{
    int n;  scanf("%d", &n);//cin>>n;
    int ac=1;
    for (int i=n; i>0; i--) {       //column loop
        for (int j=i; j>0; j--) {   //row loop
            printf("%02d", ac);
            //cout<<setw(2)<<setfill('0')<<ac;
            ac++;
        }
        putchar('\n');
        //cout<<endl;
    }
    return 0;

}