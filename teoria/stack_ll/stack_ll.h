#ifndef STACK_LL_H
#define STACK_LL_H

// Abstract Data Types
// Stack (pila di piatti) (Last In First Out)
struct nodo {
    int val;
    nodo *next;
};

typedef nodo *stack;

void init(stack &s, int d);
void deinit(stack &s);
void push(stack &s, int n); // aggiunge da sopra
void pop(stack &s); // rimuove da sopra
int top(const stack &s); // ritorna da sopra
void print(const stack &s); // stampa tutti

#endif
