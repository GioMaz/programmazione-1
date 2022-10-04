#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    a += b;
    b = a - b;
    a -= b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}