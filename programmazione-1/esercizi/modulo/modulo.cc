#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int m = a - b;
    bool n = m < 0;

    switch (n) {
        case 1:
            cout << -m << endl;
            break;
        default:
            cout << m << endl;
            break;
    }

    return 0;
}
