//Review of random number.

#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int lucky = rand() % 9 + 1;

    int x;
    cout<<"Let's  play a game!\n";
    do {
    cout<<"Guess the lucky number(1~9): "; cin>>x;
    if (x > lucky) {
        cout<<"Too large!\nTry again.\n";
    }else if (x < lucky) {
        cout<<"Too small!\nTry again.\n";
    }
    }while(x != lucky);
    cout<<"You are right! Welcome!\n";

    return 0;
}