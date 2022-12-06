#ifndef QUEUE_H
#define QUEUE_H

// Abstract Data Types
// Queue (fila di persone con primo a sinistra) (First In First Out)
struct queue {
    int t; // tail (ultima persona)
    int h; // head (prima persona)
    int d;
    int *v;
};

void init(queue &q, int d);
void deinit(queue &q);
void enqueue(queue &q, int n); // aggiunge a destra
void dequeue(queue &q); // rimuove a sinistra
int first(const queue &q); // ritorna a sinistra
void print(const queue &q);

#endif
