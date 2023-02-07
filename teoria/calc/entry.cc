#include <iostream>
#include <cstring>
#include "entry.h"

static bool isdouble(char *s, double &x) {
  return (sscanf(s, "%lf", &x) > 0);
}

bool isnumber(const entry &e) {
    return e.t == NUMBER;
}

bool isoperator(const entry &e) {
    return e.t == OPERATOR;
}

bool isopenp(const entry &e) {
    return e.t == OPENP;
}

bool isclosep(const entry &e) {
    return e.t == CLOSEP;
}

entry evaluate_entry(const entry &e1, const entry &e2, const entry &e3) {
    entry res;
    res.t = NUMBER;
    switch (e3.o) {
        case PLUS:
            res.n = e1.n + e2.n;
            break;
        case MINUS:
            res.n = e1.n - e2.n;
            break;
        case TIMES:
            res.n = e1.n * e2.n;
            break;
        case DIVIDE:
            if (e2.n == 0)
                cerr << "Impossibile dividere per 0" << endl;
            else
                res.n = e1.n / e2.n;
            break;
    }
    return res;
}

void print_entry(const entry &e) {
    if (isoperator(e)) {
        switch (e.o) {
            case PLUS: cout << '+'; break;
            case MINUS: cout << '-'; break;
            case TIMES: cout << '*'; break;
            case DIVIDE: cout << '/'; break;
        }
    }
    else if (isnumber(e)) {
        cout << e.n;
    }
    else if (isopenp(e)) {
        cout << '(';
    }
    else {
        cout << ')';
    }
}

void read_entry(entry &e) {
    double n;
    char s[MAX_DIM];
    cin >> s;
    if (isdouble(s, n)) {
        e.t = NUMBER;
        e.n = n;
    }
    else if (strcmp(s, "(") == 0) {
        e.t = OPENP;
    }
    else if (strcmp(s, "(") == 0) {
        e.t = CLOSEP;
    }
    else if (strcmp(s, "+") == 0) {
        e.t = OPERATOR;
        e.o = PLUS;
    }
    else if (strcmp(s, "-") == 0) {
        e.t = OPERATOR;
        e.o = MINUS;
    }
    else if (strcmp(s, "*") == 0) {
        e.t = OPERATOR;
        e.o = TIMES;
    }
    else if (strcmp(s, "/") == 0) {
        e.t = OPERATOR;
        e.o = DIVIDE;
    }
}
