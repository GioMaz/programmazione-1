#include <iostream>
#include <cstdlib>

using namespace std;

struct nodo {
    int val;
    nodo *next;
};

void insert_at(nodo *n, int &pos, int &val) {
    if (pos == 0) {
        nodo *n1 = new nodo;
        n1->val = n->val;
        n1->next = n->next;
        n->val = val;
        n->next = n1;
        return;
    }

    pos--;
    insert_at(n->next, pos, val);
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

    int pos = 0;
    int val= 69;
    insert_at(n, pos, val);

    for (nodo *n1 = n; n1 != NULL; n1 = n1->next) {
        cout << n1->val << ' ';
    }
    cout << endl;

    return 0;
}
