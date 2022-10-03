#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int a = 1;      // a punta 0x16b60f5cc

    // Riferimento
    int &b = a;     // b punta 0x16b60f5cc

    // Puntatore
    int *pa = &a;   // pa punta 0x16b60f5cc
    int c = *pa;    // c punta 0x16af575b4

    // Puntatore void
    void *pa1 = pa; // pa1 punta 0x16b60f5cc
}
