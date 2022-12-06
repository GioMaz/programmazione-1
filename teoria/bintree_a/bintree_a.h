#ifndef BINTREE_A_H
#define BINTREE_A_H

// Abstract Data Types
// Binary tree (altezza = lunghezza massima rami compresa tra log2(n+1) e n)
struct tree {
    int i; // indice corrente
    int d; // dimensione
    int *v;
};

void init(tree &t, int d);
void deinit(tree &t);
void insert(tree &t, int n);
tree search(const tree &t, int n);
void print(const tree &t);

#endif
