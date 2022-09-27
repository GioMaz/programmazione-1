#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char c;
    cin >> c;

    if (c < 97 || c > 122)
        return 1;

    char c1 = c - 32;
    cout << c1 << endl;

    return 0;
}