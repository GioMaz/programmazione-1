#include <iostream>
// #include <cmath>

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

int pow(int a, int b) {
    int res = 1;
    for (int i = 0; i < b; i++) {
        res *= a;
    }
    return res;
}

int decimale_aux(int n, int i, int res) {
    if (n == 0)
        return res;
    res = decimale_aux(n/10, i+1, res);
    res += pow((n % 10) * 2, i);
    return res;
}

int decimale(int n) {
    return decimale_aux(n, 0, 0);
}

int main() {
    int a = 125;
    a = binario(a);
    cout << a << endl;
    a = decimale(a);
    cout << a << endl;
    return 0;
}
