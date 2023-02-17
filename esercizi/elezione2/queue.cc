#include <iostream>
#include "queue.h"

using namespace std;

// Abstract Data Types
// Queue (fila di persone con primo a sinistra) (First In First Out)
static queue Q;

static bool isempty() {
    return (Q.head == NULL);
}

void init(int dim) {
    Q.head = NULL;
}

void deinit() {
    while (!isempty()) {
        dequeue();
    }
}

// ht-----------
// h-t----------
// h--t---------
bool enqueue(char c) {
    bool res = true;
    lista l = new (nothrow) nodo;
    if (l == NULL) {
        res = false;
    }
    else {
        l->val = c;
        l->next = NULL;
        if (isempty()) {
            Q.head = l;
        }
        else {
            Q.tail->next = l;
        }
        Q.tail = l;
    }
    return res;
}

// h--t---------
// -h-t---------
// --ht---------
bool dequeue() {
    bool res = true;
    if (!isempty()) {
        lista l = Q.head;
        Q.head = Q.head->next;
        delete l;
    }
    else {
        res = false;
    }
    return res;
}

bool first(char &c) {
    bool res = true;
    if (!isempty()) {
        c = Q.head->val;
    }
    else {
        res = false;
    }
    return res;
}

void print() {
    lista l = Q.head;
    while (l != NULL) {
        cout << l->val << ' ';
        l = l->next;
    }
    cout << endl;
}
