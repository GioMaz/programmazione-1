#include <iostream>
#include "entry.h"
#include "expression.h"

expression evaluate_expression(expression &exp) {
    if (isoperator(exp->e)) {
        expression op1, op2;
        op1 = evaluate_expression(exp->left);
        op2 = evaluate_expression(exp->right);
        exp->e = evaluate_entry(op1->e, op2->e, exp->e);
    }
    return exp;
}

void read_expression(expression &exp) {
    entry e;
    read_entry(e);
    if (isnumber(e)) {
        exp = new node;
        exp->e = e;
        exp->left = NULL;
        exp->right = NULL;
    }
    else if (isopenp(e)) {
        expression exp1, exp2;
        entry e1, e2;
        exp = new node;

        read_expression(exp1);
        exp->left = exp1;

        read_entry(e1);
        exp->e = e1;

        read_expression(exp2);
        exp->right = exp2;

        read_entry(e2);
    }
    else {
        cout << "error: expected '(' instead of ";
        print_entry(e);
        exit(0);
    }
}

expression create_expression(expression &exp1, expression &exp2, entry &e) {
    expression res;
    if (isoperator(e)) {
        res = new node;
        res->e = e;
        res->left = exp1;
        res->right = exp2;
    }
    else {
        cout << "error: expected <operator> instead of ";
        print_entry(e);
        exit(0);
    }

    return res;
}

void print_expression(const expression &exp) {
    if (exp != NULL) {
        if (isnumber(exp->e)) {
            print_entry(exp->e);
        }
        else if (isoperator(exp->e)) {
            cout << '(';
            print_expression(exp->left);
            print_entry(exp->e);
            print_expression(exp->right);
            cout << ')';
        }
    }
}
