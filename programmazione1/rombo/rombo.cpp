#include <iostream>

using namespace std;

int main() {
    int n = 20;
    int m = n/2;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (m-i < j && j < m+i) {
                cout << '*';
            }
            else {
                cout << ' ';
            }
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (j > i && j < n-i) {
                cout << '*';
            }
            else {
                cout << ' ';
            }
        }
        cout << endl;
    }
}
