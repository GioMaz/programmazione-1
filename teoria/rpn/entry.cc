#include <iostream>
#include <cstring>
#include "entry.h"

static bool isdouble(char *s, double &x) {
  return (sscanf(s, "%lf", &x) > 0);
}

bool isoff(const entry &e) {
    return e.t == OFF;
}

bool isnumber(const entry &e) {
    return e.t == NUMBER;
}

void read(entry &e) {
    double n;
    char buffer[MAX_DIM];

    cin.getline(buffer, MAX_DIM);
    if (isdouble(buffer, n)) {
        e.t = NUMBER;
        e.n = n;
    }
    else if (strlen(buffer) == 1) {
        switch (buffer[0]) {
            case 'q':
                e.t = OFF;
                break;
            case '+':
                e.t = OPERATOR;
                e.o = PLUS;
                break;
            case '*':
                e.t = OPERATOR;
                e.o = TIMES;
                break;
            case '-':
                e.t = OPERATOR;
                e.o = MINUS;
                break;
            case '/':
                e.t = OPERATOR;
                e.o = DIVIDE;
                break;
            default:
                break;
        }
    }
}

void print(const entry &e) {
    if (e.t == NUMBER) {
        cout << e.n << endl;
    }
    else {
        cout << e.o << endl;
    }
}

entry calcola(const entry &e1, const entry &e2, const entry &e3) {
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
