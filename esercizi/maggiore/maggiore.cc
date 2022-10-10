#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int min, max;

    bool minore = a < b;

    switch (minore) {
        case 1:
            min = a;
            max = b;
            break;
        default:
            min = b;
            max = a;
            break;
    }

    cout << min << ' ' << max << endl;
    return 0;
}
