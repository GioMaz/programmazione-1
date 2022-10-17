#include <iostream>
#include <cmath>

using namespace std;

int rovescia(int n, int a = 0);

int main() {
    cout << rovescia(789) << endl;
}

// n   789 78 7
// res 789 - 78
// i   1 2 3
int rovescia(int n, int a) {
    if (n < 10)
        return a * 10 + n;

    a *= 10;
    a += n % 10;
    n /= 10;

    return rovescia(n, a);
}

// scrivere un programma che prenda
// in input un numero intero e controlli se
// l'intero è palindromo tramite funzione ricorsiva
