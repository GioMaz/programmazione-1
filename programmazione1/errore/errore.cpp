#include <stdio.h>
#include <iostream>

int fattoriale(int n, int i);

int main() {
    int n = 20;
    if (n%n==0) {
        std::cout << "si" << std::endl;
        return 0;
    }
    std::cout << "no" << std::endl;
    return 1;
}

