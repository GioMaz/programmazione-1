#ifndef TREE_D_H
#define TREE_D_H

#include "tree.h"

struct tree_d {
    tree t_cognome;
    tree t_nome;
};

void init(tree_d &);
void deinit(tree_d &);
void insert(tree_d &, persona *);
tree search_cognome(const tree_d &, char *);
tree search_nome(const tree_d &, char *);
void print_cognome(const tree_d &);
void print_nome(const tree_d &);

#endif
