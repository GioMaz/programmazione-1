#include <iostream>

using namespace std;

void swap(int &n1, int &n2);

int main() {
    int n1 = 1855;
    int n2 = 1048;

    swap(n1, n2);

    cout << n1 << endl;
    cout << n2 << endl;
}

void swap(int &n1, int &n2) {
    // 0000011100111111
    //         00111111
    int t1 = n1 & 255;

    // 0000010000011000
    //         00011000
    int t2 = n2 & 255;

    n1 = n1 - t1 + t2;
    n2 = n2 - t2 + t1;
}
