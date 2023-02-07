#include <iostream>
#include <cstring>
#include "persona.h"

persona *create(char *nome, char *cognome, char *indirizzo, int numero) {
    persona *p = new persona;
    strcpy(p->nome, nome);
    strcpy(p->cognome, cognome);
    strcpy(p->indirizzo, indirizzo);
    p->numero = numero;
    return p;
}

persona *read() {
    persona *p;

    char nome[MAX_DIM];
    char cognome[MAX_DIM];
    char indirizzo[MAX_DIM];
    int numero;

    cout << "Nome: ";
    cin >> nome;
    cout << "Cognome: ";
    cin >> cognome;
    cout << "Indirizzo: ";
    cin >> indirizzo;
    cout << "Numero: ";
    cin >> numero;

    create(nome, cognome, indirizzo, numero);

    return p;
}

void print(const persona *p) {
    cout << p->cognome << ' ';
    cout << p->nome << ' ';
    cout << p->indirizzo << ' ';
    cout << p->numero << endl;
}
