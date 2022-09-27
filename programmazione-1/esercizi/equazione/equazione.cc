#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c;
    cout << "Inserire a, b e c: ";
    cin >> a >> b >> c;
    float d = (b*b)-(4*a*c);

    int x1 = (b*(-1) + sqrt(d))/(2*a);
    int x2 = (b*(-1) - sqrt(d))/(2*a);

    cout << x1 << ' ' << x2 << endl;
    return 0;
}