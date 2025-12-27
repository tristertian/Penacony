//enumeration枚举体

#include <iostream>
using namespace std;

int main()
{
    enum animal { Dog, Cat, Monkey, Invalid};
    int type;
    do {
        cout<<"0...Dog 1...Cat 2...Monkey 3...End : ";
        cin>>type;
    }while (type < Dog || type > Invalid);
    if (type != Invalid) {
        animal selected = static_cast<animal>(type);
        switch (selected) {
            case Dog    :   cout<<"Woolf!\n";   break;
            case Cat    :   cout<<"Meow!\n";    break;
            case Monkey :   cout<<"Cheow!\n";   break;
        }
    }
    return 0;
}