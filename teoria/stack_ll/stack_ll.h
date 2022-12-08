#ifndef STACK_LL_H
#define STACK_LL_H

// Abstract Data Types
// Stack (pila di piatti) (Last In First Out)
struct nodo {
    int val;
    nodo *next;
};

typedef nodo *stack;

void init(int);
void deinit();
bool push(int); // aggiunge da sopra
bool pop(); // rimuove da sopra
bool top(int &); // ritorna da sopra
void print(); // stampa tutti

#endif
