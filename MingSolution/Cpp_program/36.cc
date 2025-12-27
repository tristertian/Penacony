//display the highest Math&English degree of 3 people

#include <iostream>
using namespace std;

int main()
{
    int max(int,int,int);

    int math[3], eng[3];
    for (int i = 0; i < 3; i++) {
        cout<<"["<<i+1<<"]";
        cout<<"Math: ";     cin>>math[i];
        cout<<"English: ";  cin>>eng[i];
    }
    int max_Math = max(math[0], math[1], math[2]);
    int max_English = max(eng[0], eng[1], eng[2]);

    cout<<max_Math<<" is the highest degree of Math.\n"
    <<max_English<<" is the highest degree of English.";

    return 0;
}
int max(int a, int b, int c)
{
    int max = a;
    if (b>a) {
        max = b;
    }
    if (c>a) {
        max = c;
    }

    return max;
}