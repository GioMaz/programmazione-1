#ifndef TREE_H
#define TREE_H

#include "persona.h"

struct nodo {
    persona *p;
    nodo *left;
    nodo *right;
};

typedef nodo *tree;

void init(tree &);
void deinit(tree &, bool);
void insert_cognome(tree &, persona *);
void insert_nome(tree &, persona *);
tree search_cognome(const tree &, char *);
tree search_nome(const tree &, char *);
void print_tree(const tree &);

#endif
