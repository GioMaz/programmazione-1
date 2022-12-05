#include <iostream>
#include <cstring>
#include "persona.h"

persona *crea(char *nome, char *cognome, char *indirizzo, int numero) {
    persona *p = new persona;
    strcpy(p->nome, nome);
    strcpy(p->cognome, cognome);
    strcpy(p->indirizzo, indirizzo);
    p->numero = numero;
    return p;
}

persona *read() {
    persona *p;
    cin >> p->nome;
    cin >> p->cognome;
    cin >> p->indirizzo;
    cin >> p->numero;
    return p;
}

void print(const persona *p) {
    cout << p->nome << ' ' << p->cognome << ' ' << p->indirizzo << ' ' << p->numero << endl;
}
