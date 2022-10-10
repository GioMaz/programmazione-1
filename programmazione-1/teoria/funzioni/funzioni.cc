#include <stdio.h>
#include <iostream>

using namespace std;

void solalettura(const int &a);

int main() {
    int a = 1;
    solalettura(a);
}

void solalettura(const int &a) {
    cout << a << endl;
}
