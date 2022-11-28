#include <iostream>
#include "bintree.h"

using namespace std;

// Abstract Data Types
// Binary tree (altezza = lunghezza massima rami compresa tra log2(n+1) e n)
void init(albero &a) {
    a = NULL;
};

void deinit(albero &a) {
    if (a != NULL) {
        deinit(a->left);
        deinit(a->right);
        delete[] a;
    }
}

void insert(albero &a, int n) {
    if (a == NULL) {
        a = new (nothrow) nodo;
        a->val = n;
        a->left = NULL;
        a->right = NULL;
    }
    else if (n == a->val) return;
    else if (n < a->val) insert(a->left, n);
    else if (n > a->val) insert(a->right, n);
}

albero search(const albero &a, int n) {
    albero res;
    if (a == NULL) res = NULL;
    else if (n == a->val) res = a;
    else if (n < a->val) res = search(a->left, n);
    else if (n > a->val) res = search(a->right, n);
    return res;
}

void print(const albero &a) {
    if (a == NULL) return;
    print(a->left);
    cout << a->val << endl;
    print(a->right);
}
