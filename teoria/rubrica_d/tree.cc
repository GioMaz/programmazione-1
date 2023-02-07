#include <iostream>
#include "tree.h"
#include "persona.h"

using namespace std;

void init(tree &t) {
    t = NULL;
};

void deinit(tree &t, bool dealloca) {
    if (t != NULL) {
        deinit(t->left, dealloca);
        deinit(t->right, dealloca);
        if (dealloca) {
            delete t->p;
        }
        delete t;
    }
}

void insert_cognome(tree &t, persona *p) {
    if (t == NULL) {
        t = new (nothrow) nodo;
        t->p = p;
        t->left = NULL;
        t->right = NULL;
    }
    else if (strcmp(p->cognome, t->p->cognome) < 0) insert_cognome(t->left, p);
    else insert_cognome(t->right, p);
}

void insert_nome(tree &t, persona *p) {
    if (t == NULL) {
        t = new (nothrow) nodo;
        t->p = p;
        t->left = NULL;
        t->right = NULL;
    }
    else if (strcmp(p->nome, t->p->nome) < 0) insert_nome(t->left, p);
    else insert_nome(t->right, p);
}

tree search_cognome(const tree &t, char *c) {
    tree res;
    if (t == NULL) {
        res = t;
    }
    else if (strcmp(c, t->p->cognome) == 0) res = t;
    else if (strcmp(c, t->p->cognome) < 0) res = search_cognome(t->left, c);
    else res = search_cognome(t->right, c);
    return res;
}

tree search_nome(const tree &t, char *c) {
    tree res;
    if (t == NULL) {
        res = t;
    }
    else if (strcmp(c, t->p->nome) == 0) res = t;
    else if (strcmp(c, t->p->nome) < 0) res = search_nome(t->left, c);
    else res = search_nome(t->right, c);
    return res;
}

void print_tree(const tree &t) {
    if (t == NULL) return;
    print_tree(t->left);
    print(t->p);
    print_tree(t->right);
}
