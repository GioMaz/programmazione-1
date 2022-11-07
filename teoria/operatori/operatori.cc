#include <iostream>

using namespace std;

int main() {
    int a = 255;
    int n;

    n = a >> 2;
    cout << n << endl; // 111111

    n = a << 2;
    cout << n << endl; // 1111111100

    n = a & 254;
    cout << n << endl; // 11111110

    n = a | 0;
    cout << n << endl; // 11111111

    n = a ^ 254;
    cout << n << endl; // 00000001 (xor)

    n = ~a;
    cout << n << endl; // -256

    return 0;
}
