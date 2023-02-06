#include <iostream>
#include "bintree.h"

using namespace std;

// Abstract Data Types
// Binary tree (altezza = lunghezza massima rami compresa tra log2(n+1) e n)
void init(tree &t) {
    t = NULL;
};

void deinit(tree &t) {
    if (t != NULL) {
        deinit(t->left);
        deinit(t->right);
        delete t;
    }
}

void insert(tree &t, int n) {
    if (t == NULL) {
        t = new (nothrow) nodo;
        t->val = n;
        t->left = NULL;
        t->right = NULL;
    }
    else if (n == t->val) return;
    else if (n < t->val) insert(t->left, n);
    else if (n > t->val) insert(t->right, n);
}

tree search(const tree &t, int n) {
    tree res;
    if (t == NULL) res = NULL;
    else if (n == t->val) res = t;
    else if (n < t->val) res = search(t->left, n);
    else if (n > t->val) res = search(t->right, n);
    return res;
}

void print(const tree &t) {
    if (t == NULL) return;
    print(t->left);
    cout << t->val << endl;
    print(t->right);
}
