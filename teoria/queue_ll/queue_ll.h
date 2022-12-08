#ifndef QUEUE_LL_H
#define QUEUE_LL_H

// Abstract Data Types
// Queue (fila di persone con primo a sinistra) (First In First Out)
struct nodo {
    int val;
    nodo *next;
};

typedef nodo *lista;

struct queue {
    lista tail;
    lista head;
};

void init(int);
void deinit();
bool enqueue(int); // aggiunge a destra
bool dequeue(); // rimuove a sinistra
bool first(int &); // ritorna da sinistra
void print();

#endif
