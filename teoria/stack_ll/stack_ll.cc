#include <iostream>
#include "stack_ll.h"

using namespace std;

// Abstract Data Types
// Stack (pila di piatti) (Last In First Out)
void init(stack &s, int d) {
    s = NULL;
}

void deinit(stack &s) {
    while (s != NULL) {
        pop(s);
    }
}

void push(stack &s, int n) {
    stack s1 = new nodo;
    s1->val = n;
    s1->next = s;
    s = s1;
}

void pop(stack &s) {
    stack s1 = s;
    s = s->next;
    delete s1;
}

int top(const stack &s) {
    return s->val;
}

void print(const stack &s) {
    stack s1 = s;
    while (s1 != NULL) {
        cout << s1->val << ' ';
        s1 = s1->next;
    }
    cout << endl;
}
