#include <iostream>
#include "stack_ll.h"

using namespace std;

// Abstract Data Types
// Stack (pila di piatti) (Last In First Out)
static stack S;

static bool isempty() {
    return (S == NULL);
}

void init(int dim) {
    S = NULL;
}

void deinit() {
    while (!isempty()) {
        pop();
    }
}

bool push(int n) {
    bool res = true;
    stack s1 = new (nothrow) nodo;
    if (s1 == NULL) {
        res = false;
    }
    else {
        s1->val = n;
        s1->next = S;
        S = s1;
    }
    return res;
}

bool pop() {
    bool res = true;
    if (!isempty()) {
        stack s1 = S;
        S = S->next;
        delete s1;
    }
    else {
        res = false;
    }
    return res;
}

bool top(int &n) {
    bool res = true;
    if (!isempty()) {
        n = S->val;
    }
    else {
        res = false;
    }
    return res;
}

void print() {
    stack s1 = S;
    while (s1 != NULL) {
        cout << s1->val << ' ';
        s1 = s1->next;
    }
    cout << endl;
}
