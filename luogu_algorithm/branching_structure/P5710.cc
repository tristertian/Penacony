#include <iostream>
using namespace std;

int x;
int main()
{
    cin>>x;
    cout<<((x%2==0) && (x>4 && x<=12) ? 1 : 0)<<" "
        <<((x%2==0) || (x>4 && x<=12) ? 1 : 0)<<" "
        <<((x%2==0) ^ (x>4 && x<=12) ? 1 : 0)<<" "
        <<(!(x%2==0) && !(x>4 && x<=12) ? 1 : 0)<<endl;

    return 0;
}