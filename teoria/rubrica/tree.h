#ifndef TREE_H
#define TREE_H

#include "persona.h"

struct nodo {
    persona *p;
    nodo *left;
    nodo *right;
};

typedef nodo *tree;

void init(tree &t);
void deinit(tree &t);
void insert(tree &t, persona *p);
tree search(const tree &t, persona *p);
void print_tree(const tree &t);

#endif
