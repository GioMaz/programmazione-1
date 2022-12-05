#ifndef BINTREE_H
#define BINTREE_H

// Abstract Data Types
// Binary tree (altezza = lunghezza massima rami compresa tra log2(n+1) e n)
struct nodo {
    int val;
    nodo *left;
    nodo *right;
};

typedef nodo *tree;

void init(tree &);
void deinit(tree &);
void insert(tree &, int);
tree search(const tree &, int);
void print(const tree &);

#endif
