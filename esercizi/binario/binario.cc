#include <iostream>

using namespace std;

void binario(int n);

int main() {
    binario(255);
    return 0;
}

void binario(int n) {
    if (n == 0)
        return;

    binario(n/2);
    cout << n%2;
}
