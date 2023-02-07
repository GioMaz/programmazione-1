#include <iostream>
#include "tree_d.h"
#include "tree.h"

using namespace std;

void init(tree_d &t) {
    init(t.t_cognome);
    init(t.t_nome);
}

void deinit(tree_d &t) {
    deinit(t.t_cognome, true);
    deinit(t.t_nome, false);
}

void insert(tree_d &t, persona *p) {
    insert_cognome(t.t_cognome, p);
    insert_nome(t.t_nome, p);
}

tree search_cognome(const tree_d &t, char *s) {
    return search_cognome(t.t_cognome, s);
}

tree search_nome(const tree_d &t, char *s) {
    return search_nome(t.t_nome, s);
}

void print_cognome(const tree_d &t) {
    print_tree(t.t_cognome);
}

void print_nome(const tree_d &t) {
    print_tree(t.t_nome);
}
