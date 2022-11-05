#include <iostream>

using namespace std;

int main() {
    char input[256];

    // cat testo.txt | ./a.out
    // oppure
    // ./a.out < testo.txt

    while (cin >> input) {
        cout << input << ' ';
    }

    return 0;
}
