#include <iostream>

using namespace std;

int main() {
    int a = 255;
    int n;

    n = a >> 2;
    cout << n << endl;

    n = a << 2;
    cout << n << endl;

    n = a & 254;
    cout << n << endl;

    n = a | 0;
    cout << n << endl;

    n = a ^ 254;
    cout << n << endl;

    n = ~a;
    cout << n << endl;

    return 0;
}
