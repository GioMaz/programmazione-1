#ifndef DOUBLETREE_H
#define DOUBLETREE_H

#include "persona.h"

struct nodo {
    persona *p;
    nodo *left;
    nodo *right;
};

typedef nodo *tree;

void init(tree &);
void deinit(tree &);
void insert_nome(tree &, persona *p);
void insert_cognome(tree &, persona *p);
tree search_nome(const tree &, persona *p);
tree search_cognome(const tree &, persona *p);
void print_tree(const tree &);

#endif
