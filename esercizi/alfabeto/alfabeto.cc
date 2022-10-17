#include <iostream>

using namespace std;

bool islower(char c);
void toupper(char &c);

bool islower(char c) {
    bool res = false;

    if ('a' <= c && c <= 'z')
        res = true;

    return res;
}

void toupper(char &c) {
    c -= 'a' - 'A';
}

int main() {
    char c;
    cin >> c;

    if (islower(c))
        toupper(c);

    cout << c << endl;
}
