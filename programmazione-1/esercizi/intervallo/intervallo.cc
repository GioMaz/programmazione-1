#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;

    if (b <= a && a <= c)
        cout << -1 << endl;
    else if (a < b)
        cout << 1 << endl;
    else if (a > c)
        cout << 0 << endl;

    return 0;
}