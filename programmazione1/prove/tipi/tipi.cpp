#include <iostream>

using namespace std;

int main() {
    int n = 32768;
    short int o = 32768;
    int p = 2147483648;
    long int q = 2147483648;
    long long int r = 2147483648;

    cout << "n = " << sizeof(n) << endl;
    cout << "o = " << sizeof(o) << endl;
    cout << "p = " << sizeof(p) << endl;
    cout << "q = " << sizeof(q) << endl;
    cout << "r = " << sizeof(r) << endl;
}
