#include <iostream>
#include "stack.h"

using namespace std;

// Abstract Data Types
// Stack (pila di piatti) (Last In First Out)
static stack S;

static bool isfull() {
    return (S.i == S.dim);
}

static bool isempty() {
    return (S.i == 0);
}


void init(int dim) {
    S.i = 0;
    S.dim = dim;
    S.v = new int[dim];
}

void deinit() {
    delete[] S.v;
}

bool push(int n) {
    bool res = true;
    if (!isfull()) {
        S.v[S.i] = n;
        S.i++;
    }
    else {
        res = false;
    }
    return res;
}

bool pop() {
    bool res = true;
    if (!isempty()) {
        S.i--;
    }
    else {
        res = false;
    }
    return res;
}

bool top(int &n) {
    bool res = true;
    if (isempty()) {
        n = S.v[S.i];
    }
    else {
        res = false;
    }
    return res;
}

void print() {
    for (int i = S.i - 1; i >= 0; i--) {
        cout << S.v[i] << ' ';
    }
    cout << endl;
}
