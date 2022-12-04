#include <iostream>
#include "stack.h"

static const int dim = 100;
static int i = -1;
entry v[dim];

void init() {
    i = 0;
}

void deinit() {
}

void push(entry &e) {
    if (i != dim) {
        v[i] = e;
        i++;
    }
}

void pop() {
    if (i != 0) {
        i--;
    }
}

void top(entry &e) {
    if (i != 0) {
        e = v[i-1];
    }
}

int length() {
    return i;
}

void print() {
    for (int j = 0; j < i; j++) {
        if (v[j].type == NUMBER) {
            cout << v[j].n << ' ';
        }
        else {
            cout << v[j].op << ' ';
        }
    }
    cout << endl;
}
