#include <stdio.h>
#include <iostream>

using namespace std;

void valore(int a);
void riferimento(int &a);
void puntatore(int *a);

int main() {
    int a = 1;      // a punta 0x16b60f5cc

    // Valore (copia)
    int b = a;

    // Riferimento
    int &c = a;     // b punta 0x16b60f5cc

    // Puntatore
    int *pa = &a;   // pa vale 0x16b60f5cc
    int d = *pa;    // c punta 0x16af575b4

    // Funzioni
    valore(a);
    riferimento(a);
    puntatore(&a);

    // Puntatore void
    void *pa1 = pa; // pa1 punta 0x16b60f5cc
}

void valore(int a) {
    cout << a << endl;
}

void riferimento(int &a) {
    cout << a << endl;
}

void puntatore(int *a) {
    cout << *a << endl;
}
