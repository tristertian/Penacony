// #include <iostream>
// using namespace std;

// int main()
// {
//     long x,n;    cin>>x>>n;
//     long valid_date_1, valid_date_2;
//     valid_date_1 = n/7*5;

//     long temp=n-((n/7)*7);
//     if (temp+x-1<6) {
//         valid_date_2 = temp;
//     }else if (temp+x-1==6){
//         valid_date_2 = temp-1;
//     }else {
//         valid_date_2 = temp-2;
//     }
//     cout<<250*(valid_date_1 + valid_date_2)<<endl;
//     return 0;
// }
//错错错！我们可以使用暴力枚举
#include <iostream>
using namespace std;

int main()
{
    int x, n;   cin>>x>>n;
    int sum=0;
    for (int i=0; i<n; i++,x++) {
        if (x%7!=6 && x%7!=0) {
            sum += 250;
        }
    }
    cout<<sum<<endl;
    return 0;
}
//太美妙辣！！！