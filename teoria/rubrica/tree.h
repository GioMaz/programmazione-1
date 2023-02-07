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
void deinit(tree &);
void insert(tree &, persona *);
tree search(const tree &, char *);
void print_tree(const tree &);

#endif
