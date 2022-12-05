#ifndef PERSONA_H
#define PERSONA_H

using namespace std;

const int MAX_DIM = 100;

struct persona {
    char nome[MAX_DIM];
    char cognome[MAX_DIM];
    char indirizzo[MAX_DIM];
    int numero;
};

persona *create(char *, char *, char *, int);
persona *read();
void print(const persona &);

#endif
