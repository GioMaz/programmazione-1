#include <stdio.h>
#include <iostream>

int fattoriale(int n, int i);

int main() {
    int res = fattoriale(9, 1);
    std::cout << res << std::endl;
    return 0;
}

int fattoriale(int n, int res) {
    if (n == 1) {
        return res;
    }

    return fattoriale(n-1, res*n);
}
