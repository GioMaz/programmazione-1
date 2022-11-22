#include <iostream>
#include <cstdlib>

using namespace std;

struct nodo {
    int val;
    nodo *next;
};

void copia(nodo *&n, nodo *&n1, nodo *&n2) {
    if (n == NULL) {
        return;
    }

    n1 = new nodo;
    n1->val = n->val;

    copia(n->next, n1->next, n2);
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

    for (nodo *x = n; x != NULL; x = x->next) {
        cout << x->val << ' ';
    }
    cout << endl;

    nodo *n1;
    copia(n, n1, n1);

    for (nodo *x = n1; x != NULL; x = x->next) {
        cout << x->val << ' ';
    }
    cout << endl;

    return 0;
}
