#include <iostream>
#include <cmath>

using namespace std;

int inverti(int a) {
    int res = 0;

    while (a != 0) {
        res *= 10;
        res += a%10;
        a /= 10;
    }

    return res;
}

int main() {
    int a;
    cin >> a;
    cout << inverti(a);
}
