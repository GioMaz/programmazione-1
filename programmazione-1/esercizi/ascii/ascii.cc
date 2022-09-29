#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char c;
    cout << "Inserire un carattere: ";
    cin >> c;

    char c1 = (c + 10 - 'a') % ('z' - 'a' + 1) + 'a';

    cout << c1 << endl;

    return 0;
}
