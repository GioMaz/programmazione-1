#include <iostream>

using namespace std;

int somma(int n);
int somma_aux(int n, int res);

int main() {
    cout << somma(25) << endl;
    return 0;
}

int somma(int n) {
    return somma_aux(n, 0);
}

int somma_aux(int n, int res) {
    if (n == 0)
        return res;

    res += n%10;
    return somma_aux(n/10, res);
}
