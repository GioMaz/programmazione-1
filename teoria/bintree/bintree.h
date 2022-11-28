#ifndef BINTREE_H
#define BINTREE_H

// Abstract Data Types
// Binary tree
struct nodo {
    int val;
    nodo *left;
    nodo *right;
};

typedef nodo *albero;

void init(albero &a);
void deinit(albero &a);
void insert(albero &a, int n);
albero search(const albero &a, int n);
void print(const albero &a);

#endif
