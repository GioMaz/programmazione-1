#include <iostream>

using namespace std;

struct data {
    int giorno, mese, anno;
};

struct persona {
    char nome[200], cognome[200];
    char luogo_di_nascita[200];
    data data_di_nascita;
    enum { F, M, N } genere;
};

int main() {
    persona x = { "Giovanni Maria", "Zanchetta", "Bassano Del Grappa", { 23, 9, 2003 }, persona::M };
    persona y = x; // assegnazione per copia (non riferimento)

    // accesso a campi
    cout << x.nome << endl;
    // oppure
    persona *px = &x;
    cout << px->nome << endl;

    return 0;
}
