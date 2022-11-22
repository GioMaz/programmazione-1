#include <iostream>
#include "queue_ll.h"

using namespace std;

// Abstract Data Types
// Queue (fila di persone con primo a sinistra) (First In First Out)
void init(queue &q, int d) {
    q.h = NULL;
};

void deinit(queue &q) {
}

// ht-----------
// h-t----------
// h--t---------
void enqueue(queue &q, int n) {
    nodo *n1 = new nodo;
    n1->val = n;
    n1->next = NULL;
    if (q.h == NULL) {
        q.h = n1;
    }
    else {
        q.t->next = n1;
    }
    q.t = n1;
}

// h--t---------
// -h-t---------
// --ht---------
void dequeue(queue &q) {
    nodo *n = q.h;
    q.h = q.h->next;
    delete n;
}

int first(const queue &q) {
    return 1;
}

void print(const queue &q) {
    nodo *n = q.h;
    while (n != NULL) {
        cout << n->val << ' ';
        n = n->next;
    }
    cout << endl;
}
