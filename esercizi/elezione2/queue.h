#ifndef QUEUE_H
#define QUEUE_H

// Abstract Data Types
// Queue (fila di persone con primo a sinistra) (First In First Out)
struct nodo {
    char val;
    nodo *next;
};

typedef nodo *lista;

struct queue {
    lista tail;
    lista head;
};

void init(int);
void deinit();
bool enqueue(char); // aggiunge a destra
bool dequeue(); // rimuove a sinistra
bool first(char &); // ritorna da sinistra
void print();

#endif
