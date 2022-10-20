#include <iostream>
#include <cmath>

using namespace std;

bool palindromo(int n);
bool palindromo_aux(int n1, int n2, int res);

int main() {
    cout << palindromo(69396) << endl;
}

bool palindromo(int n) {
    return palindromo_aux(n, n, 0);
}

bool palindromo_aux(int n1, int n2, int res) {
    if (n1 == 0) {
        return n2 == res;
    }

    res *= 10;
    res += n1 % 10;

    return palindromo_aux(n1/10, n2, res);
}
