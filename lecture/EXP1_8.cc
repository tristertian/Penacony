#include <iostream>
#include <cmath>
using namespace std;

int isprime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    
    int limit = sqrt(n);
    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    cout << isprime(n) << endl;
    cout<<"\n田佩宁 202512898\n";
    return 0;
}
