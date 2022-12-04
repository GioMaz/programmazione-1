#include <iostream>
#include "entry.h"

static bool isdouble(char *s, double &x) {
  return (sscanf(s, "%lf", &x) > 0);
}

bool isoff(const entry &e) {
    return e.type == OFF;
}

bool isnumber(const entry &e) {
    return e.type == NUMBER;
}

void read(entry &e) {
    double n;
    char buffer[MAX_DIM];

    cin.getline(buffer, MAX_DIM);
    if (isdouble(buffer, n)) {
        e.type = NUMBER;
        e.n = n;
    }
    else if (strlen(buffer) == 1) {
        switch (buffer[0]) {
            case 'q':
                e.type = OFF;
                break;
            case '+':
                e.type = OPERATOR;
                e.op = PLUS;
                break;
            case '*':
                e.type = OPERATOR;
                e.op = TIMES;
                break;
            case '-':
                e.type = OPERATOR;
                e.op = MINUS;
                break;
            case '/':
                e.type = OPERATOR;
                e.op = DIVIDE;
                break;
            default:
                break;
        }
    }
}

void print(const entry &e) {
    if (e.type == NUMBER) {
        cout << e.n << endl;
    }
    else {
        cout << e.op << endl;
    }
}

entry calcola(const entry &e1, const entry &e2, const entry &e3) {
    entry res;
    res.type = NUMBER;
    switch (e3.op) {
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
