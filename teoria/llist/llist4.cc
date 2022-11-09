#include <iostream>
#include <cstdlib>

using namespace std;

struct nodo {
    int val;
    nodo *next;
};

nodo *precede(nodo *n, nodo *x1, nodo *x2) {
    if (n == x1) return x1;
    else if (n == x2) return x2;
    else return precede(n->next, x1, x2);
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

    nodo *x1 = n->next;
    nodo *x2 = n->next->next->next;
    nodo *x3 = precede(n, x1, x2);
    cout << x3->val << endl;

    return 0;
}
