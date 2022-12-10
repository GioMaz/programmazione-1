#include <iostream>
#include "tree.h"

using namespace std;

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

void insert_nome(albero &a, persona *p) {
    if (a == NULL) {
        a = new (nothrow) nodo;
        a->p = p;
        a->left = NULL;
        a->right = NULL;
    }
    else if (strcmp(p->nome, a->p->nome) <= 0) insert_nome(a->left, p);
    else insert_nome(a->right, p);
}

void insert_cognome(albero &a, persona *p) {
    if (a == NULL) {
        a = new (nothrow) nodo;
        a->p = p;
        a->left = NULL;
        a->right = NULL;
    }
    else if (strcmp(p->cognome, a->p->cognome) <= 0) insert_cognome(a->left, p);
    else insert_cognome(a->right, p);
}

albero search(const albero &a, int n) {
    albero res;
    if (a == NULL) res = NULL;
    else if (n == a->val) res = a;
    else if (n < a->val) res = search(a->left, n);
    else if (n > a->val) res = search(a->right, n);
    return res;
}

void print_tree(const albero &a) {
    if (a == NULL) return;
    print(a->left);
    print()
    print(a->right);
}
