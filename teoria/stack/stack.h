#ifndef STACK_H
#define STACK_H

// Abstract Data Types
// Stack (pila di piatti) (Last In First Out)
struct stack {
    int i;
    int d;
    int *a;
};

void init(stack &s, int d);
void deinit(stack &s);
void push(stack &s, int n); // aggiunge da sopra
void pop(stack &s); // rimuove da sopra
int top(const stack &s); // ritorna da sopra
void print(const stack &s, int i); // stampa i-esimo

#endif
