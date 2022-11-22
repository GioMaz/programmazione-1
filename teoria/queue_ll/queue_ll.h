#ifndef QUEUE_LL_H
#define QUEUE_LL_H

// Abstract Data Types
// Queue (fila di persone con primo a sinistra) (First In First Out)
struct nodo {
    int val;
    nodo *next;
};

struct queue {
    nodo *t;
    nodo *h;
};

void init(queue &q, int d);
void deinit(queue &q);
void enqueue(queue &q, int n); // aggiunge da sinistra
void dequeue(queue &q); // rimuove da destra
int first(const queue &q); // ritorna da destra
void print(const queue &q);

#endif
