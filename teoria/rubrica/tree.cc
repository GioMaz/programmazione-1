#include <iostream>
#include "tree.h"
#include "persona.h"

using namespace std;

void init(tree &t) {
    t = NULL;
};

void deinit(tree &t) {
    if (t != NULL) {
        deinit(t->left);
        deinit(t->right);
        delete[] t->p;
        delete t;
    }
}

void insert(tree &t, persona *p) {
    if (t == NULL) {
        t = new (nothrow) nodo;
        t->p = p;
        t->left = NULL;
        t->right = NULL;
    }
    else if (strcmp(p->cognome, t->p->cognome) < 0) insert(t->left, p);
    else insert(t->right, p);
}

tree search(const tree &t, char *c) {
    tree res;
    if (t == NULL) {
        res = t;
    }
    else if (strcmp(c, t->p->cognome) == 0) res = t;
    else if (strcmp(c, t->p->cognome) < 0) res = search(t->left, c);
    else res = search(t->right, c);
    return res;
}

void print_tree(const tree &t) {
    if (t == NULL) return;
    print_tree(t->left);
    print(t->p);
    print_tree(t->right);
}
