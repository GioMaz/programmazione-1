#include <iostream>
#include "bintree_a.h"

using namespace std;

// Abstract Data Types
// Binary tree (altezza = lunghezza massima rami compresa tra log2(n+1) e n)
tree left(const tree &t) {
    tree t1;
    t1.i = 2*t.i+1;
    t1.v = t.v;
    t1.d = t.d;
    return t1;
}

tree right(const tree &t) {
    tree t1;
    t1.i = 2*t.i+2;
    t1.v = t.v;
    t1.d = t.d;
    return t1;
}

void init(tree &t, int d) {
    t.i = 0;
    t.d = d + 1;
    t.v = new int[d];
    for (int i = 0; i < d+1; i++) {
        t.v[i] = -1;
    }
};

void deinit(tree &t) {
    delete[] t.v;
}

void insert(tree &t, int n) {
    tree tmp;
    if (t.i >= t.d) {
    }
    else if (t.v[t.i] == -1) {
        t.v[t.i] = n;
    }
    else if (n <= t.v[t.i]) {
        tmp = left(t);
        insert(tmp, n);
    }
    else {
        tmp = right(t);
        insert(tmp, n);
    }
}

tree search(const tree &t, int n) {
    tree res;
    if (t.v[t.i] == -1) {
        res.i = -1;
    }
    else if (t.v[t.i] == n) {
        res = t;
    }
    else if (n <= t.v[t.i]) {
        res = search(left(t), n);
    }
    else {
        res = search(right(t), n);
    }
    return res;
}

void print(const tree &t) {
    if (t.v[t.i] != -1) {
        print(left(t));
        cout << t.v[t.i] << endl;
        print(right(t));
    }
}
