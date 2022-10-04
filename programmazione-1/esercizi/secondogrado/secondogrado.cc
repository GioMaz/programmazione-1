#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;

    int d = b*b - 4*a*c;

    if (d < 0) {
        cout << "Nessuna soluzione" << endl;
        return 1;
    }

    float x1 = (-b + sqrt(d))/2;
    float x2 = (-b - sqrt(d))/2;

    cout << x1 << ' ' << x2 << endl;

    return 0;
}