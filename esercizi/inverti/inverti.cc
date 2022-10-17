#include <iostream>
#include <cmath>

void inverti(int a);

using namespace std;

int main() {
    int a;
    cin >> a;
    inverti(a);
}

void inverti(int a) {
    while (a != 0) {
        cout << a - (a/10)*10;
        a /= 10;
    }
}
