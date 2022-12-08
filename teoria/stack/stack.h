#ifndef STACK_H
#define STACK_H

// Abstract Data Types
// Stack (pila di piatti) (Last In First Out)
struct stack {
    int i; // indice corrente
    int dim;
    int *v;
};

void init(int);
void deinit();
bool push(int); // aggiunge da sopra
bool pop(); // rimuove da sopra
bool top(int &); // ritorna da sopra
void print(); // stampa tutti

#endif
