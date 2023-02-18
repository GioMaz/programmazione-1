#include <iostream>

using namespace std;

char ruota(char c) {
    int c1 = c + 7; // POSTI

    int n1 = c1 - 'a'; // ALFABETO
    int n2 = 'z' - 'a' + 1; // ALFABETO

    return 'a' + (n1 % n2); // ALFABETO
}

int main() {
    for (int i = 0; i <= 'z' - 'a'; i++) {
        cout << (char) ('a' + i);
    }
    cout << endl;

    for (int i = 0; i <= 'z' - 'a'; i++) {
        cout << ruota('a' + i);
    }
    cout << endl;

    return 0;
}
