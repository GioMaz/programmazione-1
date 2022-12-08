#include <iostream>
#include "queue.h"

using namespace std;

// Abstract Data Types
// Queue (fila di persone con primo a sinistra) (First In First Out)
static queue Q;

static int next(int i) {
    return (i + 1) % Q.dim;
}

static bool isfull() {
    return (next(Q.tail) == Q.head);
}

static bool isempty() {
    return (Q.tail == Q.head);
}

void init(int dim) {
    Q.tail = 0;
    Q.head = 0;
    Q.dim = dim + 1;
    Q.v = new int[dim];
};

void deinit() {
    delete[] Q.v;
}

// ht-----------
// h-t----------
// h--t---------
bool enqueue(int n) {
    bool res = true;
    if (!isfull()) {
        Q.v[Q.tail] = n;
        Q.tail = next(Q.tail);
    }
    else {
        res = false;
    }
    return res;
}

// h--t---------
// -h-t---------
// --ht---------
bool dequeue() {
    bool res = true;
    if (!isempty()) {
        Q.head = next(Q.head);
    }
    else {
        res = false;
    }
    return res;
}

bool first(int &n) {
    bool res = true;
    if (!isempty()) {
        n = Q.v[Q.head];
    }
    else {
        res = false;
    }
    return res;
}

void print() {
    for (int i = Q.head; i != Q.tail; i = next(i)) {
        cout << Q.v[i] << ' ';
    }
    cout << endl;
}
