#include <iostream>

using namespace std;

int binario_aux(int n, int res) {
    if (n == 0)
        return res;

    res = binario_aux(n/2, res);
    res *= 10;
    res += n % 2;
    return res;
}

int binario(int n) {
    return binario_aux(n, 0);
}

int main() {
    cout << binario(125) << endl;
    return 0;
}
