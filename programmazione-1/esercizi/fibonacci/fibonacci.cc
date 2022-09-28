#include <iostream>

using namespace std;

int main() {
    int n = 10;

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    int h;
    int p = 0;
    int p1 = 1;
    for (int i = 0; i < n - 1; i++) {
        h = p1;
        p1 = p1 + p;
        p = h;
    }

    cout << p1 << endl;

    return 0;
}