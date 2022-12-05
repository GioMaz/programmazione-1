#include <iostream>
#include <cstring>
#include "persona.h"
#include "doubletree.h"

using namespace std;

void init() {
};

void deinit(tree &t) {
    static bool dealloca = true;
    if (t != NULL) {
        deinit(t->left);
        deinit(t->right);
        if (dealloca) {
            delete t->p;
            dealloca = false;
        }
        delete t;
    }
}

void insert_nome(tree &t, persona *p) {
    if (t == NULL) {
        t = new (nothrow) nodo;
        t->p = p;
        t->left = NULL;
        t->right = NULL;
    }
    else if (strcmp(p->nome, t->p->nome) <= 0) insert_nome(t->left, p);
    else insert_nome(t->right, p);
}

void insert_cognome(tree &t, persona *p) {
    if (t == NULL) {
        t = new (nothrow) nodo;
        t->p = p;
        t->left = NULL;
        t->right = NULL;
    }
    else if (strcmp(p->cognome, t->p->cognome) <= 0) insert_cognome(t->left, p);
    else insert_cognome(t->right, p);
}

tree search_nome(const tree &t, persona *p) {
    tree res;
    if (t == NULL) res = NULL;
    else {
        int cmp = strcmp(t->p->nome, p->nome);
        if (cmp == 0) res = t;
        else if (cmp > 0 ) search_nome(t->left, p);
        else if (cmp < 0) search_nome(t->right, p);
    }
    return res;
}

tree search_cognome(const tree &t, persona *p) {
    tree res;
    if (t == NULL) res = NULL;
    else {
        int cmp = strcmp(t->p->cognome, p->cognome);
        if (cmp == 0) res = t;
        else if (cmp > 0 ) search_cognome(t->left, p);
        else if (cmp < 0) search_cognome(t->right, p);
    }
    return res;
}

void print_tree(const tree &t) {
    if (t == NULL) return;
    print_tree(t->left);
    print(t->p);
    print_tree(t->right);
}
