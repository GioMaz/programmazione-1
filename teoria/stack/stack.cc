#include <iostream>
#include "stack.h"

using namespace std;

// Abstract Data Types
// Stack (pila di piatti) (Last In First Out)
void init(stack &s, int d) {
    s.i = 0;
    s.d = d;
    s.v = new int[d];
}

void deinit(stack &s) {
    delete[] s.v;
}

void push(stack &s, int n) {
    if (s.i != s.d) {
        s.v[s.i] = n;
        s.i++;
    }
}

void pop(stack &s) {
    if (s.i != 0) {
        s.i--;
    }
}

int top(const stack &s) {
    return s.v[s.i];
}

void print(const stack &s, int i) {
    cout << s.v[i] << endl;
}