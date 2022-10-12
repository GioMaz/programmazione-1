#include <iostream>

using namespace std;

bool isprimo(int i);

int main() {
    int x;
    cin >> x;

    int i = 0;
    int a, b = -1;
    bool end = false;
    while (i < x && !end) {
        int j = 0;
        while (j < x && !end) {
            if (isprimo(i) && isprimo(j) && i + j == x) {
                a = i;
                b = j;
                end = true;
            }
            j++;
        }
        i++;
    }
    cout << a << ' ' << b << endl;
}

bool isprimo(int x) {
    if (x == 1)
        return false;

    int i = x - 1;
    bool res = true;
    while (i > 1) {
        if (x%i == 0) {
            res = false;
        }
        i--;
    }
    return res;
}
