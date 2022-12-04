#ifndef BINTREE_A_H
#define BINTREE_A_H

// Abstract Data Types
// Binary tree (altezza = lunghezza massima rami compresa tra log2(n+1) e n)
struct albero {
    int i; // indice corrente
    int d; // dimensione
    int *v;
};

void init(albero &a, int d);
void deinit(albero &a);
void insert(albero &a, int n);
albero search(const albero &a, int n);
void print(const albero &a);

#endif
