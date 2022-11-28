#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    char a[20];

    // read from stdin
    cin >> a;

    // write to stdout
    cout << a;

    // ritorna int diverso da 0 se lo stream è concluso
    cin.eof();

    // ritorna int diverso da 0 se lo stream ritorna errore
    cin.fail();

    // ripristina le flag di errore
    cin.clear();

    return 0;
}
