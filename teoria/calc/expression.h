#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "entry.h"

using namespace std;

struct node {
    entry e;
    node *left;
    node *right;
};

typedef node *expression;

expression evaluate_expression(expression &);
expression create_expression(const expression &, const expression &, const entry &);
void read_expression(expression &);
void print_expression(const expression &);

#endif
