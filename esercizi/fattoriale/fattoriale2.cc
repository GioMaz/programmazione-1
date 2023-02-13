#include <iostream>
#include <cmath>

using namespace std;

// versione tail recursive del fattoriale ricorsivo
int fatt_aux(int a, int res) {
    if (a == 0)
        return res;

    return fatt_aux(a - 1, res*a);
}

int fatt(int a) {
    return fatt_aux(a, 1);
}

int main() {
    int a = 4;
    cout << fatt(a) << endl;
}
