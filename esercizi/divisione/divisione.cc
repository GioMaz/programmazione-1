#include <iostream>

using namespace std;

int dividi(int n1, int n2, int &resto);

int main() {
    int resto = 0;
    cout << dividi(25, 4, resto) << endl;
    cout << resto << endl;
}

// 13/3
int dividi(int n1, int n2, int &resto) {
    int i = 0;
    while (n1 >= n2) {
        n1 -= n2;
        i++;
    }
    resto = n1;
    return i;
}