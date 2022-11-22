#include <iostream>
#include <cstdlib>

using namespace std;

struct nodo {
    int val;
    nodo *next;
};

// n1 n2 n3 n4
// n4 n1 n2 n3 n4
// n4 n3 n1 n2
// n4 n3 n2 n1

nodo *inverti(nodo *n, nodo *&n1) {
    if (n == NULL) {
        return n1;
    }

    nodo *n2 = new nodo;
    n2->val = n->val;
    n2->next = n1;
    n1 = n2;

    return inverti(n->next, n1);
}

int main() {
    int len = 10;
    nodo *n = NULL;
    for (int i = 0; i < len; i++) {
        nodo *n1 = new nodo;
        n1->val = rand() % 100 + 1;
        n1->next = n;
        n = n1;
    }

    for (nodo *n1 = n; n1 != NULL; n1 = n1->next) {
        cout << n1->val << ' ';
    }
    cout << endl;

    nodo *n1 = NULL;
    n1 = inverti(n, n1);

    for (nodo *m = n1; m != NULL; m = m->next) {
        cout << m->val << ' ';
    }
    cout << endl;

    return 0;
}
