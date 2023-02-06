#ifndef BINTREE_A_H
#define BINTREE_A_H

// Abstract Data Types
// Binary tree (altezza = lunghezza massima rami compresa tra log2(n+1) e n)
struct tree {
    int i; // indice corrente
    int d; // dimensione
    int *v;
};

void init(tree &, int);
void deinit(tree &);
void insert(tree &, int);
tree search(const tree &, int);
void print(const tree &);

#endif
