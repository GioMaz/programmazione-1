#ifndef QUEUE_H
#define QUEUE_H

// Abstract Data Types
// Queue (fila di persone con primo a sinistra) (First In First Out)
struct queue {
    int tail; // ultima persona
    int head; // prima persona
    int dim;
    int *v;
};

void init(int);
void deinit();
bool enqueue(int); // aggiunge a destra
bool dequeue(); // rimuove a sinistra
bool first(int &); // ritorna a sinistra
void print();

#endif
