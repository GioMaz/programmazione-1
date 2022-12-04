#include <iostream>
#include "bintree_a.h"

using namespace std;

// Abstract Data Types
// Binary tree (altezza = lunghezza massima rami compresa tra log2(n+1) e n)
albero left(const albero &a) {
    albero a1;
    a1.i = 2*a.i+1;
    a1.v = a.v;
    a1.d = a.d;
    return a1;
}

albero right(const albero &a) {
    albero a1;
    a1.i = 2*a.i+2;
    a1.v = a.v;
    a1.d = a.d;
    return a1;
}

void init(albero &a, int d) {
    a.i = 0;
    a.d = d + 1;
    a.v = new int[d];
    for (int i = 0; i < d+1; i++) {
        a.v[i] = -1;
    }
};

void deinit(albero &a) {
    delete[] a.v;
}

void insert(albero &a, int n) {
    albero tmp;
    if (a.i >= a.d) {
    }
    else if (a.v[a.i] == -1) {
        a.v[a.i] = n;
    }
    else if (n <= a.v[a.i]) {
        tmp = left(a);
        insert(tmp, n);
    }
    else {
        tmp = right(a);
        insert(tmp, n);
    }
}

albero search(const albero &a, int n) {
    albero res;
    if (a.v[a.i] == -1) {
        res.i = -1;
    }
    else if (a.v[a.i] == n) {
        res = a;
    }
    else if (n <= a.v[a.i]) {
        res = search(left(a), n);
    }
    else {
        res = search(right(a), n);
    }
    return res;
}

void print(const albero &a) {
    if (a.v[a.i] != -1) {
        print(left(a));
        cout << a.v[a.i] << endl;
        print(right(a));
    }
}
