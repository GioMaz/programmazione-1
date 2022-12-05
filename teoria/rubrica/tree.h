#ifndef TREE_H
#define TREE_H

#include "persona.h"

struct nodo {
    persona *p;
    nodo *left;
    nodo *right;
};

typedef nodo *tree_nome;
typedef nodo *tree_cognome;

void init(albero &a);
void deinit(albero &a);
void insert_nome(albero &a, int n);
void insert_cognome(albero &a, int n);
albero search(const albero &a, int n);
void print(const albero &a);

#endif
