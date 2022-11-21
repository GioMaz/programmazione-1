#include <iostream>
#include "queue.h"

using namespace std;

// Abstract Data Types
// Queue (fila di persone con primo a sinistra) (First In First Out)
static int next(const queue &q, int i) {
    return (i + 1) % q.d;
}

void init(queue &q, int d) {
    q.t = 0;
    q.h = 0;
    q.d = d + 1;
    q.v = new int[d];
};

void deinit(queue &q) {
    delete[] q.v;
}

// ht-----------
// h-t----------
// h--t---------
void enqueue(queue &q, int n) {
    if (next(q, q.t) != q.h) {
        q.v[q.t] = n;
        q.t = next(q, q.t);
    }
}

// h--t---------
// -h-t---------
// --ht---------
void dequeue(queue &q) {
    if (q.t != q.h) {
        q.h = next(q, q.h);
    }
}

int first(const queue &q) {
    return q.v[q.h];
}

void print(const queue &q) {
    for (int i = q.h; i != q.t; i = next(q, i)) {
        cout << q.v[i] << endl;
    }
}
